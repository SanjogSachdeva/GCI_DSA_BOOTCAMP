//milestone 7 1-D Arrays
//C program to insert an element in array

#include<iostream>
using namespace std;

int main()
{
int arr[100];
int i,size,num,pos;
cout<<"enter the size of array - "<<endl;
cin>>size;

cout<<"enter elements in array "<<endl;
for( i=0 ;i<size;i++)
{    cin>>arr[i];
}
cout<<"enter element to insert - "<<endl;
cin>>num;
cout<<"enter position "<<endl;
cin>>pos;

for(i=size; i>=pos ; i--)
{
    arr[i]=arr[i-1];

}
arr[pos-1]=num;


cout<<"array after insertion is - "<<endl;
for(i=0;i<size+1;i++)
{
    cout<<arr[i]<<"\t";
}
return 0;
}



