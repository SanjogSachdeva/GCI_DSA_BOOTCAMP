//milestone 7 
///Take 20 integer inputs from user and print the following:
/*number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.*/

#include<iostream>
using namespace std;

int main()
{
    int a[20];
    int positive=0,negative=0,odd=0,even=0,zero=0;
    cout<<"enter 20 numbers "<<endl;
    for(int i=0 ; i<20 ; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<20;i++)
    {
        if(a[i]>0)
        {
            positive +=1;
        }
        else if(a[i]<0)
        {
            negative +=1;
        }
        else
        {
            zero+=1;
        }
        if(a[i]%2!=0)
        {
            odd+=1;
        }
        if(a[i]%2==0)
        {
            even+=1;
        }
       
    }

    cout<<"positive no. - "<<positive<<"\n negative no. - "<<negative<<"\n odd no. - "<<odd<<"\n Even no. - "<<even<<"\n Zeroes - "<<zero<<endl;
    return 0;
}

