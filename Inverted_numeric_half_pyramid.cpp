#include<iostream>
using namespace std;
int main()
{
    int n= 5;
    for(int row = 0; row < n; row = row + 1)
    {
        //inner loop
        for(int col = 0; col < n - row; col = col + 1)
        {
            cout << col + 1 <<" ";
        }
        cout<<endl;
    }
}