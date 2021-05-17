#include<iostream>
#include<functional>
using namespace std;



int main()
{



	auto lm1 = []()    // function<void(void)> lm1 = ...;
	{
		cout << __FUNCSIG__ << endl;
	};



	auto lm2 = [](int x) -> int   // function<int(int)> lm2 = ...;
	{
		cout << __FUNCTION__ << endl;
		return x;
	};



	function<void(void)> lm3 = []() {cout << "lambda called" << endl; };



	lm1();
	lm2(100);
	lm3();
}





