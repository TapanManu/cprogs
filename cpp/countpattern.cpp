#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int countPattern(string a,string b){
    int count=0;
    int index=-1;
    index = a.find(b);
    while(index!=string::npos){
        count++;
        a = a.substr(index+b.length()-1,a.length()-1);
        index = a.find(b);
    }
    return count;
}
int main(){
    cout<<countPattern("geeksforgeeks","geek");

    return 0;
}
