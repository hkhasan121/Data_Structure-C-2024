#include<bits/stdc++.h>
using namespace std;

int max_sum_subArray(int arr[],int size,int k)
{
    int max_sum = INT_MIN;
    int i = 0;
    int j = k-1;
    while(j < size)
    {
        int sum = 0;
        for(int y = i; y<=j; y++)
        {
            sum = sum + arr[y];
        }
        max_sum = max(max_sum, sum);
        i++;
        j++;
    }
    return max_sum;
}
int main()
{
    int arr[] = {1,12,-5,-6,50,3};
    int size = sizeof(arr) /sizeof(int);
    int k = 4; //size of subArray
    int sum_of_subArray = max_sum_subArray(arr,size,k);
    double max_avg = sum_of_subArray /double(k);
    cout<<max_avg;

}