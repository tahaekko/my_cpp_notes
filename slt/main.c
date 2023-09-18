#include <iostream>
#include <algorithm>

using namespace std;

class   ss
{
    private : 
        int a  = 5;
        int b;
    public :
        typedef ss t;
        ss(int i)
        {
            a = i;
        };
        int    get_a()
        {
            return a;
        }
};

int main()
{
    typedef std::vector<ss::t> t_clas;

    int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size= ( sizeof(amounts) / sizeof(int) );
    t_clas                  taha(amounts, amounts+amounts_size);
    cout << taha::get_a() << endl;
    return (0);
}