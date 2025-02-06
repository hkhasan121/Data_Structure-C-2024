#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }

        else if(target > arr[mid])
        {
            start = mid + 1;
        }

        else if(target < arr[mid])
        {
            end = mid - 1;
        }
        //everyone mistake here
        mid = start + (end - start) / 2; 
        
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr) / sizeof(int);
    int target = 30;

    int ans = binary_search(arr,size,target);
    if(ans == -1)
    {
        cout<<"Item Not Found"<<endl;
    }
    cout<<"Item found at index: "<<ans<<endl;
}