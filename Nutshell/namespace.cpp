#include <iostream>

#define GRID 20

namespace N
{
	int func(){return 2;}
}
	int func( void )
	{
		return 0;
	}

int main()
{
	using namespace N;

	std::cout << ::func() << std::endl;
}
