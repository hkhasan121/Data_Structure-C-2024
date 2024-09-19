#include<iostream>
using namespace std;
int main()
{
    //outer loop for number of rows-> 4
    for(int i = 0; i < 4; i = i + 1)
    {
        //Inner loop for number of star = 4
        for(int j = 0; j < 4; j = j + 1)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}