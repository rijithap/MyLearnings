#include<iostream>
using namespace std;



class Base
{
public:
	Base() { cout << "Base() default constructor" << endl; }
	Base(int x) { cout << "Base one arg. constructor" << endl; }
	Base(int x, int y) { cout << "Base two arg. constructor" << endl; }
};



class Derived :public Base
{
public:
	using Base::Base; //This line helps in derive all base Class constructors
	/*
	//A constructor assumed by the compiler - sample code assumed will be like below
	Derived():Base()
	{
	}
	*/

	Derived(int x, int y):Base(x,y)
	{
		cout << "derived two arg constructor" << endl;
	}
};



//**consumer code***
int main()
{
	Derived d1;
	Derived d2(100);
	Derived d3(30,40);



	return 0;
}