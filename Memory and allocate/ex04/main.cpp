#include <iostream>
#include <fstream>
int main(int argv, char *argc[])
{
	if (argv != 4)
	{
		std::cout << "Error argument!" << std::endl;
		return (0);
	}
	std::string farg(argc[2]);
	std::string sarg(argc[3]);
	if (farg.empty() || sarg.empty())
	{
		std::cout << "Error argument!" << std::endl;
		return (0);
	}
	std::ifstream file1;
	file1.open(argc[1]);
	if (!file1)
	{
		std::cout << "Error argument!" << std::endl;
		return (0);
	}
	file1.close();
	std::fstream file_in(argc[1], std::ios::in);
	
	std::string tmp;
	std::string my_str;
	while (!file_in.eof())
	{
		getline(file_in, tmp);
		int i = 0;
		int j = 0;
		while (j < (int)tmp.length())
		{
			if (i == 0)
			{
				i = tmp.find(farg);
			}
			else
				i = tmp.find(farg, i + farg.length());
			if (i == -1)
				break ;
			if (farg.length() == tmp.length())
			{
				tmp.append(sarg);
				tmp.erase(i, farg.length());
			}
			else
			{	
				tmp.erase(i, farg.length());
				tmp.insert(i, sarg);
			}
			j += + (int)sarg.length() - (int)farg.length();
			j++;
		}

		if (file_in.eof())
			my_str += tmp;
		else
			my_str += tmp + "\n";

	}
	file_in.close();
	std::ofstream file(argc[1], std::ios::out);
	file << my_str;
	file.close();
}