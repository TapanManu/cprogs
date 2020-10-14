#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//quick sort on arrays

void swap(int *x,int *y){
    int t = *x;
    *x = *y;
    *y = t;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low;j < high;j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[],int low,int high){
    int p=0;
    if(low<high){
        p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main(){
    int arr[]={4,5,6,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    return 0;
}
