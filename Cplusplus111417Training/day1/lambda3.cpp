

int main()
{
	​​​​​​​
		auto a = 100, b = 200;


	//define a lambda and provide a handle, so that is recyclable.
	auto lm = [&]()
	{​​​​​​​
		cout << "Inside lambda..." << endl;
	a = a + 10;
	b = b + 10;
	cout << "a:" << a << ",b:" << b << endl;
	}​​​​​​​;



	cout << "Before lambda call, a:" << a << ",b:" << b << endl;
	lm();
	cout << "After lambda call, a:" << a << ",b:" << b << endl;

	//..
	return 0;
}​​​​​​​
