//milestone 7 1-D Arrays
//Write a C program to find maximum and minimum element in an array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int a[n];    
    
   
    cout<<"enter "<<n<<" numbers "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    int maxi=a[0],mini=a[0];
for(int i=0;i<n;i++)
{
    if(a[i]>=maxi)
    {
    maxi=a[i];
    }
    if(a[i]<mini)
    {
        mini=a[i];
    }
}
cout<<"maximum is "<<maxi<< "\n minimum is "<<mini<<endl;
return 0;
}
