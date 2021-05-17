
#include<iostream>
using namespace std;


//C++11 approach
template<typename T1, typename T2> auto Sum(T1 x, T2 y) ->decltype(x + y)
{
	​​​​​​​
		return x + y;
}​​​​​​​;


//****consumer code****
int main()
{

	auto x = Sum(12.34f, 100);
	cout << "x:" << x << endl;
	cout << "****************" << endl;


	x = Sum(100, 12.34f);   //explicit cum implicit instantiation
	cout << "x:" << x << endl;
	return 0;
}​​​​​​​





