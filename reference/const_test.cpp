#include <iostream>

class X
{
	public :
		int x,y;
		X()
		{
		}
};
int main()
{
	const X a;
	std::cout << a.x;
	return (0);
}	
