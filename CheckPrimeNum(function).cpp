#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num)
{
    if(num<=1)
    {
        return false;
    }
    for(int i=2; i<num-1; i++)
    {
        if(num % i == 0)
        {
            // that mean remainder perfectly 0
            //that is not a prime number
            return false;
        }
    }
    // here [2,3,4.....n-1] any number can not divide num perfectly
    //so prime number
    return true;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool ans = checkPrime(num);

    if(ans)
    {
        cout<<num<<" is a prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number"<<endl;
    }
}