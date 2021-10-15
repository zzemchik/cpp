#include "Account.hpp"

#include <iostream>


    void	Account::_displayTimestamp(void)
    {
        time_t now = time(NULL);
        tm local = *localtime(&now);
        char buf[16];
        strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &local);
        std::cout << '[' << buf << ']';
    }

	void	Account::makeDeposit( int deposit )
    {

        _nbDeposits++;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << \
        ";p_amount:" << _amount << ";deposits:" \
        << deposit << ";amount:" << \
        _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
        _totalAmount += deposit;
        _amount += deposit;
        _totalNbDeposits++;
    }

	bool	Account::makeWithdrawal( int withdrawal )
    {
        _displayTimestamp();
        if (withdrawal > _amount)
        {
             std::cout << " index:" << _accountIndex << \
        ";p_amount:" << _amount << ";withdrawal:" \
        << "refused\n";
        return (0);
        }
        _nbWithdrawals++;
        std::cout << " index:" << _accountIndex << \
        ";p_amount:" << _amount << ";withdrawal:" \
        << withdrawal << ";amount:" << \
        _amount - withdrawal << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
        _totalAmount -= withdrawal;
        _amount -= withdrawal;
        _totalNbDeposits++;
        return (1);
    }

	int		Account::checkAmount( void ) const
    {
        return (_amount);
    }

    int	Account::getNbAccounts(void)
    {
        return (_nbAccounts);
    }
	int	Account::getTotalAmount( void )
    {
        return (_totalAmount);
    }
	int	Account::getNbDeposits( void )
    {
        return (_totalNbDeposits);
    }
	int	Account::getNbWithdrawals( void )
    {
        return (_totalNbWithdrawals);
    }

	void	Account::displayStatus(void) const
    {
        _displayTimestamp();
         std::cout << " index:" << _accountIndex << \
         ";amount:" << _amount << ";deposits:" \
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    }

	void	Account::displayAccountsInfos(void)
    {
        _displayTimestamp();
        std::cout << " accounts:" << _nbAccounts << \
         ";total:" << _totalAmount << ";deposits:" << \
        _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl; 
    }

    Account::Account( int initial_deposit )
    {
        _amount = initial_deposit;
        _accountIndex = _nbAccounts;
        _nbDeposits = 0;
        _nbWithdrawals = 0;
        _totalAmount += _amount;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";" \
        << "amount:" << _amount << ";created" << std::endl;
        _nbAccounts++;
    }
    Account::~Account(void)
    {
        _displayTimestamp();
         std::cout << " index:" << _accountIndex << \
         ";amount:" << _amount << ";closed\n";
    }

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
