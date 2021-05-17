#include<iostream>
#include<functional>
using namespace std;



class CA
{
private:
	function<void(void)> lm1;
	function<int(void)> lm2;
public:
	CA(function<void(void)> l1, function<int(void)> l2) :lm1(l1), lm2(l2)
	{ }
	void invoke()
	{
		lm1();
		cout << lm2();
	}

	void operator ()()
	{
		lm1();
		cout << lm2();
	}
};
//******consumer code*******
int main()
{
	auto lambda1 = []() -> void {cout << "lambda1 called..." << endl; };
	auto lambda2 = []()-> int {cout << "lambda2 called" << endl; return 100; };



	CA obj1(lambda1, lambda2);
	//obj1.invoke();
	obj1();



	return 0;
}