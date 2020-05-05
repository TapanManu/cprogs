#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	//arithmetic progression
	int n=7,diff;
	int arr[]={1,4,7,10,13,16,19};
	int a =arr[0];
	int d = arr[1]-arr[0];
	for(int i=0;i<n-1;i++){
		diff = arr[i+1]-arr[i];
		int e = d==diff?1:0;
		if(!e){
			cout<<"Error occured";
			exit(0);
		}
	}
	cout<<"8th term:";
	cout<<(a+(7)*d)<<endl;
	cout<<"sum of terms:"<<endl;
	cout<<(n*(2*a+(n-1)*d))/2<<endl;


}
