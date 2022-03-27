//milestone 7 1-D Arrays
//Write a C program to delete an element from an array at specified position.


#include<iostream>
using namespace std;

int main()
{
int arr[100];
int i,size,pos;
cout<<"enter the size of array - "<<endl;
cin>>size;

cout<<"enter elements in array "<<endl;
for( i=0 ;i<size;i++)
{    
    cin>>arr[i];
}
cout<<"enter element position to delete - "<<endl;
cin>>pos;
for(int i=pos-1;i<size-1;i++)
{
    arr[i]=arr[i+1];
}
size-=1;
cout<<"array after deletion is - "<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr[i];
}
return 0;
}
