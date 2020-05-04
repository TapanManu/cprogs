#include <iostream>
using namespace std;
int fact(int);
int main(){
	int num;
	cout<<"get the number to compute factorial";
	cin>>num;
	cout<<fact(num)<<endl;
}
int fact(int x){
	return x<=1?1:x*fact(x-1);
}
