#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void selection_sort(int n,int arr[])
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int min=i;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[j]<arr[min])
//             {
//                     min=j;
//             }
//         }
//         int temp=arr[min];
//         arr[min]=arr[i];
//         arr[i]=temp;
//     }
// }


void selection_sort(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i],index=-2;
        for(int j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                   min=arr[j];
                   index=j;
            }
        }
        if(index!=-2)
        {
            int temp=arr[i];
            arr[i]=min;
            arr[index]=temp;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    selection_sort(n,arr);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}