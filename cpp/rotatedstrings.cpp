#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isRotatedString(string a,string b){
    if(a.length()!=b.length())
        return false;
    string doub = a + a;
    return doub.find(b) != string::npos;
}

int main(){
    string a = "cake";
    string b = "akec";
    if(isRotatedString(a,b)){
        cout<<"rotated strings"<<endl;
    }
    else{
        cout<<"not rotated strings";
    }
    return 0;
}
