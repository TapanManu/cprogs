#include <iostream>
#include <bits/stdc++.h>

using namespace std;    

int main(){
    string exc = "CC";
    int len = exc.length();
    long int value=0;
    for(int i=len-1;i>=0;i--){
        value+=pow(26,len-i-1)*(int(exc.at(i))-64);
    }
    cout<<value;
    return 0;
}
