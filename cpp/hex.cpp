
// C++ program to words in a sentence. 
#include <bits/stdc++.h> 
using namespace std; 

stack <int> s;
char* decToHex(int ctr){
    while(ctr>0){
        char ch=65;
        int d = ctr%16;
        if(d>9 && d<16){
            ch = int(ch) + d - 10;
        }
        else{
            ch = d;
        }
        s.push(int(ch));
        ctr/=16;
    }
}
  
// Driver function 
int main() 
{ 
    int ctr = 255;
    decToHex(ctr);
    char val[20];
    int i=0;
    while(!s.empty()){
        if(s.top()>=65 && s.top()<=90){
            val[i++]=(char)s.top();
        }
        else{
            val[i++]=s.top();
        }
        s.pop();
    }
    val[i++]='\0';
    cout<<val;
    return 0; 
}
