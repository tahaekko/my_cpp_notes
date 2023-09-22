#include <iostream>

class X
{
	public:
		int	w,h;
		X();
		X(int , int);
		X operator++ (int i)
		{
			X temp;

			temp.w = ++this->w;
			temp.h = ++this->h;
			return (temp);
		}
		void	eat();
		~X();
};

X operator + (const X &param, const X &param1)
{
	X temp;

	temp.w = param.w + param1.w;
	temp.h = param.h + param1.h;
	return (temp);
}

// X operator ++ (const X &param, int i)
// {
// 	X temp;

// 	temp.w = param.w +i;
// 	temp.h = param.h + i;
// 	return (temp);
// }

X::X()
{
	std::cout << "const" <<std::endl;
}
void X::eat()
{
	std::cout << "eat called"<<std::endl;
}

X::X(int x, int y) : w(x) , h(y)
{
	std::cout << "constructor called"<<std::endl;
}

X::~X()
{
	std::cout << "destructor called"<<std::endl;
}

int main()
{
	X x(23, 3);
	X x2(1,1);


	X temp = x + x2;
	temp = temp++;
	std::cout << temp.h;
}
