#include<iostream>
using namespace std;

int digitsTo_number(int num_of_digits)
{
    int num = 0;
    for(int i=0; i<num_of_digits; i++)
    {
        int digit;
        cout<<"Enter your digit: ";
        cin>>digit;

        num = num * 10 + digit;
        cout<<"Number created so far: ";
        cout<<num<<endl<<endl;;
    }
    return num;
}

int main()
{
    int num_of_digits;
    cout<<"How many digits: ";
    cin>>num_of_digits;
    cout<<endl;

    int number = digitsTo_number( num_of_digits);
    cout<<"Number created by your given digits: "<<number<<endl;
}