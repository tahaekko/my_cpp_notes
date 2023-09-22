#include <iostream>

using namespace std;

class t_Vect
{
	public :
		int x,y;
		t_Vect();
		t_Vect(int , int);
		t_Vect operator = (const t_Vect &);
		t_Vect operator== (const t_Vect &);
		~t_Vect();
};

t_Vect::t_Vect()
{
	cout << "Hello!" << endl;
}
t_Vect::t_Vect(int X, int Y)
{
	x = X;
	y = Y;
}

t_Vect t_Vect::operator=(const t_Vect &param)
{
	cout << "Copyin" << endl;
	this->x = param.x;
	this->y = param.y;
	return (*this);
}

t_Vect t_Vect::operator==(const t_Vect &param)
{
	t_Vect *tmp = new t_Vect;

	tmp->x = param.x;
	cout <<"here"<< tmp->x << endl;
	tmp->y = param.y;
	return (*tmp);
}

t_Vect::~t_Vect()
{
	cout << "bye" << endl;
}

int main()
{
	t_Vect v1(2, 5);
	t_Vect dst;
	t_Vect *v2;


	dst = v1;
	*v2 == v1;
	cout << "step1" << endl;
	cout << v2->y << endl;
}
