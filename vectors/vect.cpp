#include <iostream>
#include <algorithm>

class ss
{
    public :
        int a = 1;
        typedef ss t;
        void    get_a( void )
        {
            std::cout << a << std::endl;
        }
        ss (int i)
        {
            a = i;
            std::cout << "start " << a << std::endl;
        }
    
};

int main()
{
    

    int d[] = {1,2,3,4};
    size_t sd(sizeof(d) / sizeof(int));


    std::vector <ss::t> vec(d, d+sd);

    for (auto i = vec.begin(); i != vec.end(); ++i)
        (*i).get_a();

    ss::t   last(8);

    vec.at(0) = last;
    for (auto i = vec.begin(); i != vec.end(); ++i)
        (*i).get_a();
}