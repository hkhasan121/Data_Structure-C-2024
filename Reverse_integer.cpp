#include<bits/stdc++.h>
using namespace std;

int rev_integer(int num)
{
    int ans = 0;
    int rem = 0;
    bool isNegative = false;
    if(num<0)
    {
        isNegative = true;
        num = -num;  //then negative number convert into positive number
    }
    while(num>0)
    {
        rem = num % 10;
        ans = ans * 10 + rem;
        num = num/10;
    }
    return isNegative ? -ans:ans;
}

int main()
{
    int num;
    cout<<"Enter your digit: ";
    cin>>num;

    int reverse = rev_integer(num);
    cout<<"Reverse digit: "<<reverse<<endl;
}