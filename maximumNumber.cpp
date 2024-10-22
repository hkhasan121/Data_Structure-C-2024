#include<bits/stdc++.h>
using namespace std;

int findMaxNum(int num1,int num2,int num3)
{
    int ans1 = max(num1,num2);
    int finalAns = max(ans1,num3);
    return finalAns;
}

int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    int maximum = findMaxNum(num1,num2,num3);
    cout<<"Maximum number is: "<<maximum<<endl;
}