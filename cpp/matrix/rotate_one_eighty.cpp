#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void disp(int matrix[][4],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}

//180 degree
void rotate(int matrix[][4],int n){
     for(int i=0;i<n/2;i++){
         for(int j=0;j<n;j++){
             int temp = matrix[i][j];
             matrix[i][j] = matrix[n-i-1][n-j-1];
             matrix[n-i-1][n-j-1] = temp; 
         }
     }
     //if n is odd
     if(n&1){
         for(int j=0;j<n/2;j++){
            int temp = matrix[n/2][j];
            matrix[n/2][j] = matrix[n/2][n-j-1];
            matrix[n/2][n-j-1] = temp;
         }
     }
     disp(matrix,n);
}
int main(){
    int matrix[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate(matrix,4);
    return 0;
}
