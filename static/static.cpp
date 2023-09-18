#include <iostream>

//Static members of a class are not associated with the objects of the class: they are independent variables 

//Static member functions
// Static member functions are not associated with any object. When called, they have no this pointer.
// Static member functions cannot be virtual, const, volatile, or ref-qualified.
// The address of a static member function may be stored in a regular pointer to function, but not in a pointer to member function.


struct Entity
{
    static int  x; // declaration ,incomplete type
    static void func( void );
    const static int y = 1;
};
int Entity::x; // definition, complete type

void Entity::func()
{
    // dont accept this caus its not depend on object 

    std::cout << "Hi from static";
}

int main()
{
    Entity e1;

    
    e1.x = 1;

    Entity e2;

    std::cout << e2.y << std::endl;
    Entity::func();
}