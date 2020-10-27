#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,4,3,5,2,6,7,8,9,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    if(binary_search(arr,arr+size,0)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    if(binary_search(arr,arr+size,10)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
