#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row = 0; row<n; row++)
    {
        int k = 0;
        
        //inner loop

        for(int col = 0; col <((n*2) - 1); col = col + 1)
        {
            if(col < n - row - 1)
            {
                cout<<" ";
            }
            else if(k < 2*row + 1 )
            {
                if( k == 0 || k == 2*row || row == n - 1)
                {
                    cout<<"*";
                    
                }

                else{
                     cout<<" ";

                }
                k++;
               

            }

            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}