#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {0,1,2,3,5,6,7,8};
    int sum=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int alg_sum = (size * (size+1))/2;
    for(int i=0;i<size;i++)
        sum+=arr[i];
    cout<<alg_sum - sum;
    return 0;
}
