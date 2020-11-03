#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   // vector<int> nums;
    int i = 0;
    int arr[] = {6,2,4,1,5,3};
    int sum = 7;
    int tsum = sum;
    for(int i=0;i<5;i++){
        tsum = tsum - arr[i];
        //nums.push_back(arr[i]);
        for(int j=i+1;j<6;j++){
            tsum = tsum - arr[j];
            if(tsum==0){
                cout<<arr[i]<<"\t"<<arr[j]<<endl;
            }
            tsum = tsum + arr[j];
        }
        tsum = tsum + arr[i];
    }
    return 0;
}
