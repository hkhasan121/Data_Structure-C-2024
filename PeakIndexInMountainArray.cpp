#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    while(s < e)
    {
        int mid = s + (e-s) / 2;
        if(arr[mid] < arr[mid + 1])
        {
            //we know peak index is right side,,then go to right
            s = mid + 1;
        }
        else{
            //here peak index is left or this position.
            e = mid;
        }
    }
    //when s=e,,thats mean this is the peakIndex
    return s;
}

int main()
{
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter Array Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    int ans = peakIndexInMountainArray(arr,n);
    cout<<"Peak Index is: "<<ans<<endl;


}
