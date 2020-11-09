#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//o(n^2) solution
void pascal(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int p[n][n];
    p[0][0]=1;
    p[1][0]=1;
    p[1][1]=1;
    int prev=1;
    for(int i=2;i<n;i++){
        p[i][0]=1;
        for(int j=1;j<i;j++){
            p[i][j]=p[prev][j-1]+p[prev][j];
        }
        p[i][i]=1;
        prev = i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n=8;
    pascal(n);
    //print pascal
    //O(n^2)
    
}
