#include<iostream>
using namespace std;



template<typename T> class Func
{
private:
	T* ff;
public:
	Func(T* f) :ff(f) { }
	void Set(T* f)
	{
		ff = f;
	}



	void Call()
	{
		(*ff)();
	}



	void operator()()   //FUNCTOR
	{
		(*ff)();
	}
};



//***consumer code****
void fun1() { cout << "fun1() called" << endl; }
void fun2() { cout << "fun2() called" << endl; }



int main()
{
	Func<void(void)> obj1(&fun1);  //An object that holds an handle to a function -FUNCTION OBJECT
								   //obj1.Call();
	obj1();           // obj1.operator()();
	obj1.Set(&fun2);
	//obj1.Call();
	obj1();
	return 0;
}