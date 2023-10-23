/*Ambiguity
Some language constructs can look like a declaration or an expression. Such ambi-
guities are always resolved in favor of declarations. A related rule is that a
declaration that is a type specifier followed by a name and empty parentheses is a
declaration of a function that takes no arguments, not a declaration of an object
with an empty initializer. (See “Initializers” later in this chapter for more informa-
tion about empty initializers.) Example 2-1 shows some examples of how
declarations are interpreted.
Example 2-1. Disambiguating declarations*/
#include <iostream>
#include <ostream>

class T
{
	public:
	T( ){ std::cout << "T( )\n"; }
	T(int) { std::cout << "T(int)\n"; }
};
int a, x;
int main( )
{
	T(a);		// Variable named a of type T, not an invocation of the T(int) constructor
//	T a;		/*Conclusion this is gonna be a redeclaration of ‘T a’*/
	T b(5);		// Function named b of no arguments, not a variable named b of type T
	T b;
	T c(T(x));	// Declaration of a function named c, with one argument of type T
}
