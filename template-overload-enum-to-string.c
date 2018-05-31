#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

//enum declaration
template <typename T>
struct enumStrings
{
	static char const* data[];
};

//utility type, taken from elsewhere

template <typename T>
struct enumRefHolder
{
    T& enumVal;
    enumRefHolder(T& enumVal) : enumVal(enumVal) {}
};

template <typename T>
struct enumConstRefHolder
{
    T const& enumVal;
    enumConstRefHolder(T const& enumVal) : enumVal(enumVal) {}
};

//prefix overload ++

template <typename T>

T& operator++(T& init)
{
	init = static_cast<T>(init + 1);
	return init;
}

//postfix overload ++
template<typename T>
T& operator++(T& init, int)
{
	T rVal = init;
	++init;
	return rVal;
}

//prefix overload --
template <typename T>
T& operator--(T& init)
{
	init = static_cast<T>(init - 1);
	return init;
}

//postfix overload --
template <typename T>
T& operator--(T& init, int)
{
	T rVal = init;
	--init;
	return rVal;
}

template <typename T>
ostream& operator<< (ostream& str, enumConstRefHolder<T> const& data)
{
	return str << enumStrings<T>::data[data.enumVal];
}

template <typename T>
istream& operator>> (istream& str, enumRefHolder<T> const& data)
{
	string value;
	str >> value;
//	auto find = find(data.begin(), data.end(), value);
//	if (find !+ end)
//	{
//		data.enumVal = static_cast<T>(
	return str;
}

//public interface
template <typename T>
enumConstRefHolder<T> enumToString(T const& e) {return enumConstRefHolder<T>(e);}

template <typename T>
enumRefHolder<T> enumFromString(T& e) {return enumRefHolder<T>(e);}

//SEASONS ENUM

enum Season
{
		spring,
		summer,
		autumn,
		winter
};

template<> char const* enumStrings<Season>::data[] = {"spring", "summer", "autumn", "winter"};

main()
{
	Season a = spring;
	cout << enumToString(a) << "\n";

	cout << "A: " << a << " : " << enumToString(a) << "\n";
}

