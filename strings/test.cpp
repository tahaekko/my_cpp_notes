#include <iostream>

void    func(std::string &str)
{
    str[5] = '9';
}

void f(int &a)
{
    a = 9;
}

int main()
{
    int a= 5;

    std::cout << a<< std::endl;

    f(a);
    std::cout << a<< std::endl;
}