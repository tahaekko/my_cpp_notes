#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int i = 0;
mutex m1;

void func()
{
	unique_lock<mutex>lck{m1};
	for (int j = 0 ; j < 10000 ; j++)
		i++;
	return ;
}

void	duplicate(int num1)
{
	num1 *= 2;
}

int main()
{
	thread t1{func};
	thread t2{func};
	t1.join();
	t2.join();
	cout << i << endl;

	//paramatrized func
	thread t3{duplicate, ref()};
}
