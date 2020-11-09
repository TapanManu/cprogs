#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//use three-sum logic
void sumzero(int a[],int n){
    sort(a,a+n);
    int l=0;
    int r=n-1;
    for(int i=0;i<n-1;i++){
        if(a[l]+a[i]+a[r]==0){
            cout<<a[l++]<<" "<<a[i]<<" "<<a[r--]<<"\n";
        }
        else if(a[l]+a[i]+a[r]<0){
            l++;
        }
        else
            r--;
    }
}

int main(){
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sumzero(arr,n);
}
