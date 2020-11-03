#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=0,r = n-1,eq=l+1;
    int sumlower=0,sumhigher=0;
    //O(n^2) solution
    while(eq<r){
        sumlower=sumhigher=0;
        for(int i=l;i<eq;i++){
            sumlower+=arr[i];
        }
        for(int i=r;i>eq;i--){
            sumhigher+=arr[i];
        }
        if(sumlower==sumhigher){
            cout<<"equillibrium index:"<<eq;
            break;
        }
        eq++;
    }

    //o(n) solution
    int sum=0; int leftsum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        sum-=arr[i];
        if(sum==leftsum){
            cout<<i;
            break;
        }
        leftsum+=arr[i];
    }
    return 0;

}
