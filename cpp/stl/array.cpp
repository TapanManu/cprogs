#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    array<int,5> nums{1,2,3,4,5};
    for( auto it = nums.begin(); it != nums.end() ; ++it)
        cout<< *it <<'\t';
    cout<<endl;
}
