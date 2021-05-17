#include<iostream>
using namespace std;




//template<typename T1, typename T2, typename T3> T3  Sum(T1 x, T2 y)
//{
//    return x + y;
//}



template<typename T1, typename T2, typename T3> T1  Sum(T2 x, T3 y)
{
	return x + y;
};




//****consumer code****
int main()
{
	float x;
	//x = Sum<float, int,float>(12.34f, 100);  //explicit instantiation
	x = Sum<float>(12.34f, 100);  //explicit cum implicit instantiation
	cout << "x:" << x << endl;
	cout << "****************" << endl;
	//x = Sum<int,float,float>(100, 12.34f);
	x = Sum<float>(100, 12.34f);   //explicit cum implicit instantiation
	cout << "x:" << x << endl;
	return 0;
}