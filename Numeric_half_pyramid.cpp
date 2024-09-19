#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row = 0; row < n; row = row + 1)
    {
        //inner loop
        for(int col = 0; col < row + 1; col = col + 1)
        {
            int i = col + 1 ;
            cout<< i <<" ";
            
        }
        cout<<endl;
    }
}