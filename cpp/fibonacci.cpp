#include <iostream>
#include <cstdlib>
using namespace std;
int fib(int);
int main(){
	int num;
	cout<<"get the number to compute fibonacci";
	cin>>num;
	for(int i=0;i<num;i++)
		cout<<fib(i)<<"\t";
}
int fib(int x){
	return abs(x>=1?fib(x-1)+fib(x-2):x);
}
