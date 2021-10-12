#include <iostream>

template <typename T>
class Array {
    private:
        int _size;
        T * _type;
    public:
        Array() : _size(0), _type(0) { }

        Array(const unsigned int & a) : _size(a), _type(new T[a]) { }

        Array(const Array & oter) : _size(), _type() { *this = oter; };

        Array & operator = (const Array & oter) {
            if (this != & oter) {
                this->_size = oter._size;
                delete [] _type;
                _type = new T[_size];
                for (int i = 0; i < _size; i++)
                    this->_type[i] = oter._type[i];
            }
            return (*this);
        }

        void setArray(const int & iter, const T & value)
        {
            if (this->_size < iter || iter < 0)
                throw (static_cast<std::string>("bad iterator!"));
            this->_type[iter] = value;
        }

        T & operator [] (const int & iter) const
        {
            if (this->_size < iter || iter < 0)
                throw (static_cast<std::string>("bad iterator!"));
            return (this->_type[iter]);
        }
        
        ~Array() {delete [] _type; }
};