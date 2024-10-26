#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int num)
{
    for(int i = 2; i<=num - 1; i++)
    {
        if(num % i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int total= 0;

    if(num<=1)
    {
        cout<<"No prime number exist!!!!!"<<endl;
        return 0;
    }

    for(int i=2; i<=num; i++)
    {
        bool is_i_prime = checkPrime(i);
        if(is_i_prime)
        {
            cout<<i<<" ";
            total= total + 1;
        }
    }
    cout<<endl;
    cout<<"Total prime number: "<<total<<endl;

}