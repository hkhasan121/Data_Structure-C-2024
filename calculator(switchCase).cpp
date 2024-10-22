#include<bits/stdc++.h>
using namespace std;

int main()
{   
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtruction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<endl;

    float a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    cout<<endl;

    float ans = 0;

    int operation;
    cout<<"Enter the operation number: ";
    cin>>operation;
    cout<<endl;


    switch(operation){
        case 1:
        cout<<"Addition of "<<a<<" and "<<b<<":"<<endl;
        ans = a + b;
        break;

        case 2:
        cout<<"Subtruction of "<<a<<" and "<<b<<":"<<endl;
        ans = a - b;
        break;

        case 3:
        cout<<"Multiplication of "<<a<<" and "<<b<<":"<<endl;
        ans = a * b;
        break;

        case 4:
        cout<<"Division of "<<a<<" and "<<b<<":"<<endl;
        ans = a / b;
        break;

        default:
        cout<<"Invalid operation"<<endl;
        return 0;
    }
    cout<<endl;

    cout<<"Result: "<<ans<<endl;

    cout<<endl;


}