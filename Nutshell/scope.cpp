#include <iostream>


//See “Namespaces” later

int main()
{
	{
		int i = 0;
	}
	{
		int i = 0;
	}
	int x = 40;
	int y = 40;
	{
		std::cout << x << std::endl; // print 40
	}

	{
		int x = 5; // inner scope hide outer
		char y = 'c'; // inner scope hide outer
		std::cout << x << std::endl;
	}
}
