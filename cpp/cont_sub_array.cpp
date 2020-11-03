#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//KADANE'S ALGORITHM

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector <int> subarray;

    int maxsum = INT_MIN;
    for(int i=1;i<size;i++){
        if(arr[i-1]>0){
            arr[i]+=arr[i-1];
            maxsum = max(arr[i],maxsum);
            subarray.push_back(max(arr[i],maxsum));
        }
    }
    
    cout<<maxsum;
    return 0;
}
