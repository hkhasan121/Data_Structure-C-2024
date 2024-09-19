#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Rows = 45;
    int Cols = 45;

    for(int row = 0; row < Rows; row = row + 1)
    {
        //inner loop
        for(int col = 0; col < Cols; col = col + 1)
        {
            if(row == 0 || row == Rows - 1)
            { 
                cout<<"*";
            }
            else{
                if(col == 0 || col == Cols - 1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}