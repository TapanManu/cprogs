#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int size;

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void disp(int arr[],int n){
    for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
    cout<<endl;
}


void permutation(int arr[],int l,int r){
    static int count=0;
    int i=l;
    if(l==r){
        disp(arr,size);
        
        return;
    }
    do{
        swap(arr[l],arr[i]);
        permutation(arr,l+1,r);
        swap(arr[l],arr[i]);        //backtracking
        count++;
        i++;
    }while(i<=r);
    
}

int main(){
    int a[] = {1,2,3,4,5};
    size = sizeof(a)/sizeof(a[0]);
    permutation(a,0,size-1);
    return 0;
}
