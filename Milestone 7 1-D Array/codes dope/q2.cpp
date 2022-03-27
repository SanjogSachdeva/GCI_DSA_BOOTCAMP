//milestone 7 1-D Arrays
//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.

#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int n;
    cout<<"enter 10 numbers "<<endl;
    for(int i=0 ; i<10 ; i++)
    {
        cin>>a[i];
    }

    cout<<"enter a no. to check in array "<<endl;
    cin>>n;
    for(int i=0 ; i<=10 ; i++)
    {
        if(a[i]==n)
        {
            cout<<"the no. is present in the array "<<endl;
            break;
        }
        else if(i==10)
        cout<<"Not Present";
        
    }



}