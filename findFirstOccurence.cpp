#include<bits/stdc++.h>
using namespace std;

int findFirstOcuurence(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;  // Store the position
            end = mid - 1;  // Search in the left half for the first occurrence
            
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
    return ans;
}

int findLastOcuurence(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;  // Store the position
            start = mid + 1;  // Search in the right half for the last occurrence
            
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
    return ans;
}


int findTotalOcuurence(int arr[],int size,int target)
{
    int totalOccurence = -1;
    int First = findFirstOcuurence(arr,size,target);
    int Last = findLastOcuurence(arr,size,target);
     totalOccurence = Last - First + 1;


}

int main()
{
    int arr[] = {30,30,30,30,30,30,50,70,80,90};
    int size = sizeof(arr) / sizeof(int);
    int target = 30;

    int ans = findTotalOcuurence(arr,size,target);
    if(ans == -1)
    {
        cout<<"Occurence Not Found"<<endl;
    }
    cout<<"Total Occurence: "<<ans<<endl;
}