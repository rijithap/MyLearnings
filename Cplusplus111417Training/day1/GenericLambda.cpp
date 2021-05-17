#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



//Example on Generic lambda, where the lambda's formal parameter
//uses the 'auto' type inference keyword.  [C++14 feature]



int main()
{
	vector<int> v1 = { 10,20,30,40,50,60,70 };
	vector<char> v2 = { 'y','e','t','q','p','b','v' };



	auto lm1 = [](int x) {cout << x << ","; };
	auto lm2 = [](char x) {cout << x << ","; };



	for_each(v1.begin(), v1.end(), lm1);
	cout << endl;
	for_each(v2.begin(), v2.end(), lm2);
	cout << endl;
	cout << "--------------------" << endl;
	//define a generic lambda
	auto generic = [](auto x) {cout << x << ","; };
	for_each(v1.begin(), v1.end(), generic);
	cout << endl;
	for_each(v2.begin(), v2.end(), generic);
	return 0;
}