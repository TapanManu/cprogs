#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   // vector<int> nums;
    int i = 0;
    int arr[] = {6,2,4,1,5,3};
    int sum = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    for(int i=0;i<size-2;i++){
        int l = i+1;
        int r = size-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==sum){
                cout<<arr[i]<<"\t"<<arr[l]<<"\t"<<arr[r]<<endl;
                break;
            }
            else if(arr[i]+arr[l]+arr[r]<sum)
                l++;
            else
                r--;
        }   
    }
    return 0;
}
