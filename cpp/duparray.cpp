#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findDuplicate(vector <int> nums){
    int i=0;
    while(i<nums.size()){
        if(nums[abs(nums[i])]>0)
            nums[abs(nums[i])]=-nums[abs(nums[i])];
        else
            return abs(nums[i]);
        i++;
    }
    return -1;
}

int main(){
    vector <int> input = {1,3,4,2,2};
    int output = findDuplicate(input);
    if(output==-1)
        cout<<"distinct values only";
    else
        cout<<"duplicate value is "<<output<<"\n";
    return 0;
}
