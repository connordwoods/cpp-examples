#include <iostream>
#include <vector>
#include <utility>
#include <stdlib.h>
using namespace std;

int main()
{
	int a;
	int b=0;	
	int c=0;
	vector<int> ints (10);
	
	int tmp;
//	int* p = ints.data();

	while ( cin >> tmp )
	{
		if ( tmp == 'q' || tmp == 'Q' || ints.size() < 10)
		{
			break;
		}
//	*p = tmp;
//	free(p);
//	++p;
	}	
	
	for ( int i = 2; i < 500; ++i )
	{
	    
		
		//cout << a;
		if ( a % i == 0 )
		{
			b = i;
			c = a / b;
			int d = b + c;
			cout << d;
		}
	}
}
/*	
	int d = b + c;
	
	if ( a == d )
	{
		cout << d;
	}
	else
	{
	   cout << "shit's fucked";
	}
} */
