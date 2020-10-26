#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int palindrome(char* arr,int size){
    int l=-1;
    int r=size;
    for( ; l <= size/2 ; ){
        l++;
        r--;
        if(arr[l]!=arr[r]){
            return 0;
        }
    }
    
    return 1;
}
int main(){
    char arr[] = {'m','a','l','a','y','a','l','a','m'};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = palindrome(arr,size);
    res==1? cout<<"palindrome": cout<<"not palindrome";
    cout<<endl;
    return 0;
}

