//milestone 7 1-D Arrays
//Write a program to find the sum and product of all elements of an array.

#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int sum=0,product=1;
    cout<<"enter 5 numbers "<<endl;
    for(int i=0 ; i<5 ; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
        product*=a[i];
    }
    cout<<"sum of array is "<<sum<<"\n product of array is "<<product<<endl;
    return 0;
}
