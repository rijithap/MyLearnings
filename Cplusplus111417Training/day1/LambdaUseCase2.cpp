#include<iostream>
#include<list>
#include<algorithm>
using namespace std;



class CA
{
private:
	int a, b;
public:
	CA(int x = 0, int y = 0) :a(x), b(y) { }
	int funA() { return a; }
	int funB() { return b; }
};




//****consumer code***********



int main()
{
	list<CA> ls1;
	for (int i = 1; i <= 5; i++)
	{
		ls1.push_back(CA(i, i + 10));
	}



	int result1 = 0, result2 = 0;
	int total = 0;



	auto lm1 = [&result1](CA& ob)
	{
		result1 = result1 + ob.funA();
	};



	auto lm2 = [&result2](CA& ob)
	{
		result2 = result2 + ob.funB();
	};



	for_each(ls1.begin(), ls1.end(), lm1);
	for_each(ls1.begin(), ls1.end(), lm2);



	total = result1 + result2;
	cout << "Net total, of:-" << result1 << "+" << result2 << "=" << total << endl;
	return 0;
}