#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

main() {
	std::vector<int> ints;
/*	HARDCODE FOR TEXTBOOK CHALLENGE
	ints.push_back(5);
	ints.push_back(9);
	ints.push_back(-1);
	ints.push_back(200);
	ints.push_back(0); */

//	User gathered input option
	cout << "Type integers that are separated by spaces. Enter when done.";
	int tmp;
	while (cin >> tmp) //while input is ints
	{
		ints.push_back(tmp);
	}
//	Print unsorted vector
	for (int i=0; i!=ints.size(); i++)
	{
		cout << ints[i] << " ";
	}
	sort(ints.begin(), ints.end());
	cout << "\n";
//	Print sorted vector
	for (int i=0; i!=ints.size(); i++)
	{
		cout << ints[i] << " ";
	}
}
