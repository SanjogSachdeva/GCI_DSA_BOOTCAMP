//milestone 7 1-D Arrays
//Write a C program to read and print elements of array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no. of elements "<<endl;
    cin>>n;

    int a[n];
    for(int i=0 ; i<n;i++)
    {
        cout<<"enter number "<<i+1<<endl;
        cin>>a[i];

    }
cout<<"The numbers are "<<endl;
 for(int i=0 ; i<n;i++)
    {
    cout<<a[i]<<endl;
   
    }
    return 0;
}