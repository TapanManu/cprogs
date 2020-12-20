#include<iostream>
using namespace std;

int trailzeroes(int n){
    return n==0?0:n/5+trailzeroes(n/5);
}

int main(){
    //no of trailing zeros in factorial of number
    int factnum = 9;
    cout<<trailzeroes(factnum);
}
