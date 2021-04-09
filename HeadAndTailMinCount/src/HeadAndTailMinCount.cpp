/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> A{1,1,0,1,1};
    int numOf1s = 0;
    int numOf0s = 0;
    int numOfAttempts = 0;
    int numOf1sXored0 = 0;
    int numOf1sXored1 = 0;

    cout<<"A :"; 
    for (int j : A)
    {
        cout << j << " ";
        if(j==1)
            numOf1s++;
        else
            numOf0s++;

    }

        
    cout<<"\nA size :"<<A.size()<<"\n";

    vector<int> A_Expected0;
    vector<int> A_Expected1;
    vector<int> A_XORED0;
    vector<int> A_XORED1;
    
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
        {
            A_Expected0.push_back(0);
        }
        else
        {
            A_Expected0.push_back(1);
        }
        
    }

    cout<<"A_Expected0 :"; 
    for (int x : A_Expected0)
        cout << x << " ";
        
    cout << "\n";
    
    for(int i=0;i<A.size();i++)
    {
        if(i%2==0)
        {
            A_Expected1.push_back(1);
        }
        else
        {
            A_Expected1.push_back(0);
        }
        
    }
    
    cout<<"A_Expected1 :"; 
    for (int y : A_Expected1)
        cout << y << " ";
        
 
    
    for(int i=0;i<A.size();i++)
    {
        A_XORED0.push_back(A[i]^A_Expected0[i]);
        A_XORED1.push_back(A[i]^A_Expected1[i]);      
    }
    cout << "\n";
    
    cout<<"A_XORED0 :"; 
    for (int k : A_XORED0)
    {
        cout << k << " ";
        if(k==1)
            numOf1sXored0++;

    }

    
    cout << "\n";    
    
    cout<<"A_XORED1 :";     
    for (int l : A_XORED1)
    {
        cout << l << " ";
        if(l==1)
            numOf1sXored1++;

    }
    
    cout << "\n"; 
    numOfAttempts = numOf1sXored0 > numOf1sXored1 ? numOf1sXored1 : numOf1sXored0;
    
    cout <<"Minimum attempts needed to sort : " << numOfAttempts ;
    return numOfAttempts;
}
