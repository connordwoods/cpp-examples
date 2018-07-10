#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	int b;	
	int c;
	
	vector<int> ints;
	
	int tmp;
	
	while ( cin >> tmp )
	{
		if ( tmp == 'q' || tmp == 'Q' )
		{
			break;
		}
	ints.push_back( tmp );
	}	
	
	for ( int i = 0; i < a; ++i )
	{
		if ( *a[i] % i == 0 )
		{
			b = i;
			c = a / b;
		}
	}
	
	int d = b + c;
	
	if ( a == d )
	{
		cout << d;
	}
}
