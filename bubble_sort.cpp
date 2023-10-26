#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n,int arr[])
{
    int m=n;
    int k=n-1;
    
    for(int i=0;i<m-1;i++)
    {
        int c=0;
        for(int j=0;j<k;j++)
        {
            cout<<"hello"<<" ";
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                c=8;
            }  
        } 
        if(c==0)
              break;
        k--;
    }
}

// void bubble_sort(int n,int arr[])
// {
//     for(int i=n-1;i>=1;i--)
//     {
//         int didswap=0;
//         for(int j=0;j<=i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//                 didswap=1;
//             }  
//         } 
//         if(didswap=0)
//            break;
//     }
// }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
    bubble_sort(n,arr);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}