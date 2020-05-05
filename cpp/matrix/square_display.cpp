/*
display
 1 2 3
 4 5 6
 7 8 9

 output
 1 3
 7 9

 5

input
 1 2 3 4
 5 6 7 8
 9 10 11 12
 13 14 15 16

 output
 1 4
 13 16

 6 7
 10 11

 */

#include<iostream>
using namespace std;
int main()
{
	int arr[][4]={{1,2,3,5},
				  {4,5,6,7},
				  {7,8,9,10},
				  {11,12,13,14}};

	int n=4;
	for(int i=0,k=n-1;i<=k;i++,k--){
		if(i==k){
			cout<<arr[i][i]<<endl;
		}
		else{
		cout<<arr[i][i]<<" "<<arr[i][n-i-1]<<endl;
		cout<<arr[k][n-k-1]<<" "<<arr[k][k]<<endl;
		cout<<endl;
	}
	}

	return 0;
}
