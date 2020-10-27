#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void disp(int arr[],int size){
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

int main(){

    int arr[]={9,8,7,6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    disp(arr,size);
    sort(arr,arr+size);           //STL Function
    cout<<"SORTED ARRAY"<<endl;
    disp(arr,size);
    return 0;
}
