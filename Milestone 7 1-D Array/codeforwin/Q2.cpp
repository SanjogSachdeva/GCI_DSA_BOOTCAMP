 //milestone 7 1-D Arrays
 //Write a C program to print all negative elements in an array.

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
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<a[i]<<endl;

        }

    }
    return 0;
}