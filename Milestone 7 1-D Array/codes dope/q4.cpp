//milestone 7 1-D Arrays
//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.


#include<iostream>
using namespace std;

int main()
{
    int a[10],b[10];
    cout<<"enter 10 numbers "<<endl;
    for(int i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }
    for(int i=0 ;i<10;i++)
    b[10-1-i]=a[i];
    for(int i=0 ; i<10 ; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}