#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int decimalToBinary(int n)
{
     if (n == 0) return 0;
    int i = 0;
    int binaryNo = 0;
    while(n > 0)
    {
        int bit = n % 2;
         binaryNo = bit * pow(10,i) + binaryNo;
         i++;
         n = n / 2;
    }
    return binaryNo;
}

int b_to_d(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int i = 0;
    int decimal = 0;
    while(n)
    {
        int bit = n % 10;
        decimal = decimal + pow(2,i++) * bit;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    cout<<"Enter your decimal number: ";
    int n;
    cin>>n;
    
    int binary = decimalToBinary(n);
    cout<<"Binary number is : "<<binary<<endl;

    cin>>n;
    int d = b_to_d(n);
    cout<<d;
}