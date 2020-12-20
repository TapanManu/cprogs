#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int leftmost(string arr){
    int count[256]={0};
    int min=INT_MAX;
    for(int i=0;i<arr.length();i++){
        count[arr[i]]+=1;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
            if(count[i]<min){
                min = count[i];
            }
        }
    }
    for(int i=0;i<arr.length();i++){
        if(count[arr[i]]==min)
            return i;
    }
}

int main(){
    //string arr = "geeksforgeeks";
    //arr = "goodprogrammer";
    string arr = "abba";
    cout<<"left most non repeating character:"<<arr[leftmost(arr)];
    return 0;
}
