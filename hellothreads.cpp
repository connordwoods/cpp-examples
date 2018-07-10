#include <thread>
#include <iostream>

using namespace std;

void hello()
{
	cout << "Hello";
}

void world()
{
	cout << " world!";
}

main()
{
	thread t1 {hello};
	thread t2 {world};
	t1.join();
	t2.join();

}
