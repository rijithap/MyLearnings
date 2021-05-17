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
	void fun1() { cout << "CA-fun1 called" << endl; }
	void fun2() { cout << "CA-fun2 called" << endl; }
	void operator()(CA& ob)
	{
		ob.fun1();
		ob.fun2();
	}
};




//****consumer code***********
void Fun1(CA& ob)
{
	ob.fun1();
}
void Fun2(CA& ob)
{
	ob.fun2();
}



int main()
{
	list<CA> ls1;
	for (int i = 1; i <= 5; i++)
	{
		ls1.push_back(CA(i, i + 10));
	}



	//auto itr = ls1.begin();   // list<int>::iterator itr = ls1.begin();
	//while (itr != ls1.end())
	//{
	//    itr->fun1();    // (itr.operator ->())->fun1();
	//    itr->fun2();
	//    itr++;
	//}
	//----An expensive approach - 2 function calls for each object....

	//for_each(ls1.begin(), ls1.end(), Fun1);
	//for_each(ls1.begin(), ls1.end(), Fun2);

	/*
	Algorthims from STL library can map to a global function, and
	FUNCTOR's [class member function] ONLY.
	*/
	//CA obj;
	//for_each(ls1.begin(), ls1.end(),obj);
	//, obj.operator()(object_from_ls1);



	//C++11 - Directly map or link to the desired member function of the
	//        class, with the help of lambda's



	auto lm1 = [](CA& ob) { ob.fun1(); };
	auto lm2 = [](CA& ob) {ob.fun2(); };



	for_each(ls1.begin(), ls1.end(), lm1);
	for_each(ls1.begin(), ls1.end(), lm2);

    // direct lambda handler code in for_each
	for_each(ls1.begin(), ls1.end(), [](CA& ob) {ob.fun2(); });
	return 0;
}