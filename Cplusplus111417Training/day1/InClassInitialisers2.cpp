#include<iostream>
using namespace std;



class CA
{
private:
	int a{};
	int b{ 20 };
	float c = 12.34f;
	int sum = a + b;
	double val = compute();
public:
	//CA() = default;  //Programmer requests the compiler to generate a def. constructor
	//CA(int x) :a(x) {}



	double compute()
	{
		return c * 45.56;
	}
	void print()
	{
		cout << "a =" << a << endl;
		cout << "b =" << b << endl;
		cout << "c =" << c << endl;
		cout << "sum =" << sum << endl;
		cout << "val =" << val << endl;
		Console.ReadLine();
	}
};
//------------------
int main()
{
	CA obj1;
	//CA obj2(100);
	obj1.print();
	//obj2.print();

	return 0;
}