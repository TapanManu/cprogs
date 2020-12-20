#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
    stack<string> words;
    string a = "I like coding very much";
    string temp="";
    for(int i=0;i<a.length();i++){
        if(a[i]!=' '){
            temp+=a[i];
        }
        else{
            words.push(temp);
            temp="";
        }
        if(i == a.length()-1){
            words.push(temp);
        }
    }
    a="";
    while(!words.empty()){
        a = a + " " + words.top();
        words.pop();
    }
    cout<<a;
    return 0;
}
