#include <fstream>
#include <iostream>


int main()
{
	std::ifstream infile;

	infile.open("example.txt");
	if (infile.is_open())
		std::cout << "open sucess\n";
}
