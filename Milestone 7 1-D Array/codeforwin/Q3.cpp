//milestone 7 1-D Arrays
//Write a C program to find sum of all array elements

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
   
    int a[n];
    int sum=0;
   
    cout<<"enter "<<n<<" numbers "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
