#include <iostream>

#define X 0x000002 //flag x
#define Y 0x000004 // flag y
#define K 0x000008 //flag k
#define Z 0x000020 //flag z


using namespace std;

struct fruit
{
	char c;
	double	f;
	int	s1;

};

void	ft_bin(int num)
{
	if (num > 0)
	{
		ft_bin(num / 2);
		cout << num %2;
	}
}

int	ft_test(int flags)
{
	if (flags & X)
		std::cout << "x called\n";
	if (flags & K)
		std::cout << "k called\n";
	if (flags & Y)
		std::cout << "y called\n";
	if (flags & Z)
		std::cout << "z called\n";
	return (0);
}

int main( void )
{
	struct fruit f;
	int pr;
	std::cout << X << std::endl;
	std::cout << Y << std::endl;

	pr = (X|Y|Z|K);
	pr &= ~Z;
	std::cout << "pr "<< pr << std::endl;

	ft_test(pr);

	int orr = 123;
	int& ref = orr;
	int	*p = &orr;

	std::cout << &orr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << p << std::endl;


	// ft_bin(ft_test(X|Y));
	// cout << endl;


}
