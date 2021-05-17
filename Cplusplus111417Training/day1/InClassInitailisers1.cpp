#include<iostream>
using namespace std;



class CA
{
private:
	int a = 100;
	float b = 45.21f;
	double c = 67.45;
public:
	/*
	Scenario - 5: Compiler will assume a default constructor, if in-case we don't
	provide any.
	*/
	/*
	CA():a(100),b(45.21f),c(67.45)
	{



	}
	*/

	void print() const
	{
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
		cout << "c:" << c << endl;
	}
};



//***consumer code************
int main()
{
	CA obj1;
	obj1.print();
	return 0;
}