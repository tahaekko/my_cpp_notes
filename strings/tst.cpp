#include <iostream>

using namespace std;

int main( int ac, char **av)
{
	std::string str = "   Hello world Hello ";

	cout << str.length() << endl;

	if (str.empty())
		std::cout << "here we are" << endl;
	//func discover
	size_t found = str.find("Hello");
	cout << found << endl;
	string needl("Hello");
	str = str.erase(found, needl.length());


	cout << str.length() << endl;
}
