#include<iostream>
using namespace std;



int main()
{
	int a = 10, b = 20;



	auto lm = [&](int x) ->int
	{
		return a + b + x;
	};



	//invocation
	auto result1 = lm(100);
	cout << "result1 :" << result1 << endl;



	result1 = lm(400);
	cout << "result1 :" << result1 << endl;
	return 0;
}