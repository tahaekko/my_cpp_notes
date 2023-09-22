#include <iostream>


// Rectangle rectb;   // default constructor called
// Rectangle rectc(); // function declaration (default constructor NOT called)
// Rectangle rectd{}; // default constructor called 


class Rectangle
{
    int width, height;
    public :
        Rectangle()
        {
            std::cout << "rectangle constactor called" << std::endl;
        }
        Rectangle(int, int);
        Rectangle operator + (const Rectangle &);
        int area()
        {
            return (width * height);
        }
};

Rectangle::Rectangle(int x, int y) : width(x), height(y)
{
    std::cout << "Ready !" << std::endl;
}

Rectangle Rectangle::operator + (const Rectangle &param)
{
    Rectangle temp;
    int int;
    temp.width = this->width + param.width;
    temp.height = this->height + param.height;
    return (temp);
}

int main()
{
    Rectangle *rect , *rect1;

    rect = new Rectangle (5,3);  
    rect1 = new Rectangle (5,3);

    Rectangle res = *rect1 + *rect;
    std::cout << res.area() << std::endl;
    std::cout << res.area() << std::endl;
    //rect->area() <==> (*rect).area();
    // delete rect;
}