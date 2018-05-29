#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;

main() {
	vector<string> strs;
/*	HARDCODE FOR TEXTBOOK CHALLENGE
	ints.push_back(5);
	ints.push_back(9);
	ints.push_back(-1);
	ints.push_back(200);
	ints.push_back(0); */

//	User gathered input option
	cout << "Type words that are separated by spaces. To exit, type any number and enter.";
	string tmp;
	while (cin >> tmp) //while input is strs
	{
//		strs.push_back(tmp);
		if (tmp == "q" || tmp == "Q")
		{
			break;
		}
		strs.push_back(tmp);
	}
//	Print unsorted vector
	for (int i=0; i!=strs.size(); i++)
	{
		cout << strs[i] << " ";
	}
	sort(strs.begin(), strs.end());
	cout << "\n";
//	Print sorted vector
	for (int i=0; i!=strs.size(); i++)
	{
		cout << strs[i] << " ";
	}
}
