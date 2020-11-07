#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//next permutation algorithm

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int first_decrease(vector<int>&arr){
    for(int i = arr.size()-2;i>=0;i--){
        if( arr[i] < arr[i+1] )
            return i;
    }
    return -1;
}

int find_next_largest(vector<int>&arr,int first_small){
    
    for(int i = first_small+1;i < arr.size();i++){
        if(arr[first_small] < arr[i])
            return i;
    }
    return -1;
}

void next_permutation(vector <int> &arr){
    int first_small = first_decrease(arr);
    
    if(first_small==-1){
        sort(arr.begin(),arr.end());
        return;
    }
    int next = find_next_largest(arr,first_small);
    
    swap(arr[first_small],arr[next]);
    reverse(arr.begin()+first_small+1,arr.end());
    
}

//<img src="https://assets.leetcode.com/static_assets/media/original_images/31_Next_Permutation.gif">

int main(){
    vector <int> arr = {3,2,1};
    next_permutation(arr);
    for(auto ar: arr)
        cout<<ar<<"\t";
    cout<<endl;
}
