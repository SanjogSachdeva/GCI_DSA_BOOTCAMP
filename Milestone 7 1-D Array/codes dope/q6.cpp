//milestone 7 1-D Arrays
//Q6-initialize and print all elements of a 2D array.

#include<iostream>
using namespace std;

int main()
{
	int a[3][2] = {{1,1}, {2,4}, {4,8}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<"Element at a["<<i<<"]["<<j<<"] : "<<a[i][j]<<endl;
		}
	}

	return 0;
}
