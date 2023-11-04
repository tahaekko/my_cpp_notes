#include <iostream>

/*
A small mistake can sometimes lead to
code that compiles successfully but runs
incorrectly because an identifier refers to
a different object from the one you intended
*/
namespace n
{
	class namelookup
	{
		public:
			int n = 10;
			namelookup( void ){
				std::cout << "called" << std::endl ;
			}
	};
	char n = 'c';
}


namespace n
{
	char f = 'a';
} // namespace n

namespace {
	int i = 10;
}

namespace
{
	namespace X
	{
		int i = 20;
	}
	namespace Y = X;
	int f(){return i;} // this func print prev `i`
} // namespace


int m = 10;

int main ()
{
	int m = 5;


	using n::namelookup;

	namelookup lol;
	std::cout << n::n << std::endl;
	std::cout << m << std::endl;
	std::cout << f()<< std::endl;

	/*
	I crate a global int i and unamed namespace has int i;
	trying to print `i` show ambiguity err
	std::cout << i << std::endl;
	*/
}
