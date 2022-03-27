//milestone 7 1-D Arrays
//Question 1 : Take 10 integer inputs from user and store them in an array and print them on screen

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    for(int i=0 ; i<10;i++)
    {
        cout<<"enter number "<<i+1<<endl;
        cin>>a[i];

    }
cout<<"The numbers are "<<endl;
 for(int i=0 ; i<10;i++)
    {
    cout<<a[i]<<endl;
   
    }
    return 0;
}