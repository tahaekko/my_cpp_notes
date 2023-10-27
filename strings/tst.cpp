#include <iostream>

using namespace std;

std::string ft_replace(std::string str, std::string to_find, std::string to_replace)
{
	size_t found = 0;
	while ((found = str.find(to_find, found)) != string::npos) // search for what is string::npos
	{
		cout << found << endl;
		 str.erase(found, to_find.length());
		 str.insert(found, to_replace);
		found++;
	}
	return (str);
}

int main( int ac, char **av)
{
	std::string str = "   Hello world Hello ";
	string to_find ("Hello");
	string replaced ("suckers");
	size_t	found = 0;

	cout << str.length() << endl;

	if (str.empty())
		std::cout << "here we are" << endl;

	std::string str_repl = ft_replace(str, to_find, replaced);
	cout << str << endl;
	cout << str_repl << endl;
}
