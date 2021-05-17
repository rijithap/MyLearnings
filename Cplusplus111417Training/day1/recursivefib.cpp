#include<iostream>
#include<functional>
using namespace std;
//A lambda can only capture the enclosing scope elements and not any global
//elements




//function<int(int)> fib = [&fib](int x)
//{
//    return x <= 2 ? 1 : fib(x - 1) + fib(x - 2);
//};




auto Recursive_Fib = [](int x)   //OUTER LAMBDA
{
	function<int(int)> fib = [&fib](int x)    //INNER LAMBDA
	{
		return x <= 2 ? 1 : fib(x - 1) + fib(x - 2);
	};



	//invoke the lambda 'fib'
	return fib(x);
};
int main()
{
	cout << Recursive_Fib(20) << endl;
	return 0;
} 