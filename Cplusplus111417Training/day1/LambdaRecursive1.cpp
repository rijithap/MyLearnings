#include<iostream>
#include<functional>
using namespace std;



int main()
{
	//define a recursive lambda
	/*
	Whenever we want to capture the lambda handle inside of a lambda, then we
	cannot declare or use the type-inference construct 'auto' for the lambda handle
	*/

	/*auto fib = [&fib](int x)
	{
	return x <= 2 ? 1 : fib(x - 1) + fib(x - 2);
	};*/




	function<int(int)> fib = [&fib](int x)
	{
		return x <= 2 ? 1 : fib(x - 1) + fib(x - 2);
	};



	cout << fib(20) << endl;
}