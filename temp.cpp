#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int n1=n;
    int sum=0;
    while(n>0)
    {
        int  lastnum=n%10;
        cout<<lastnum<<endl;
        sum = sum + pow(lastnum,3);
        n=n/10;
    }
    cout<<n<<endl;
    cout<<sum<<endl;
    if(sum==n1)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstrong number"<<endl;
    }
    return 0;
}
