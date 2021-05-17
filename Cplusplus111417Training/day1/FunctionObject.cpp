using namespace std;



class Func
{
private:
	void(*ff)();
public:
	Func(void(*f)()) :ff(f) { }
	void Set(void(*f)())
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
	Func obj1(&fun1);  //An object that holds an handle to a function -FUNCTION OBJECT
					   //obj1.Call();
	obj1();           // obj1.operator()();
	obj1.Set(&fun2);
	//obj1.Call();
	obj1();
	return 0;
}