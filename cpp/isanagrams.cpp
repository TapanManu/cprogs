#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isAnagram(string a,string b){
    if(a.length()!=b.length())
        return false;
    
    int count[256]={0};
    for(int i=0;i<a.length();i++)
        count[a[i]]+=1;
    for(int i=0;i<b.length();i++)
        count[b[i]]-=1;
    for(int i=0;i<256;i++){
        if(count[i]!=0)
            return false;
    
    return true;
    }

}

int main(){
    
    if(isAnagram("aabacc","cabaca")){
        cout<<"anagrams";
    }
    else{
        cout<<"not anagrams";
    }
    return 0;
}
