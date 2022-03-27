//milestone 7 1-D Arrays
//Write a program to check if elements of an array are same or not it read from front or back.


#include<iostream>
using namespace std;

int main()
{
    int n ,i;
    int a[n];
    int m=0;
    cout<<"enter no of elements on array "<<endl;
    cin>>n;
    cout<<"enter array "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
     for(i=0 ; i<n/2 ; i++)
     {
         if(a[i]==a[n-1-i])
         {
         }
         else 
         {
             cout<<"no";
            break;
         }
     }

     if (i==n/2)
     {
     cout<<"yes";
     }
    
     return 0;
}


 