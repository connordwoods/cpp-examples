#include <iostream>

using namespace std;
/*
struct Types {
	bool boo; //1
	char cha; //1
	int in; //4
	long lon; //4
	double dou; //8
	long double lodo; //8
	}; */
/*
struct Types {
	long double lodo;
	double dou;
	int in;
	long lon;
	char cha;
	bool boo;
}; */

struct Types {
	long double lodo;
//	int in;
//	long lon;
	double dou;
	long lon;
	int in;
	char cha;
	bool booo;
} __attribute__((packed));

int main() {
	cout << sizeof(Types) << endl;
	return 0;
}
