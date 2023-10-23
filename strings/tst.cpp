#include <iostream>

using namespace std;

int main( int ac, char **av)
{
	std::string str = "   Hello world Hello ";
	string to_find ("Hello");
	string replaced ("suckers");
	size_t	found = 0;

	cout << str.length() << endl;

	if (str.empty())
		std::cout << "here we are" << endl;
	//func discover
	while ((found = str.find(to_find, found)) != string::npos)
	{
		cout << found << endl;
		str = str.erase(found, to_find.length());
		str = str.insert(found, replaced);
		found++;
	}

	cout << str << endl;
}
