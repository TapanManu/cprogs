#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void disp(int matrix[][3],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<matrix[i][j]<<" ";
         }
         cout<<endl;
     }
}

//180 degree
void rotate(int matrix[][3],int n){
     
     for(int i=0;i<=n/2;i++){
         for(int j=0;j<=n-i-1;j++){
             int temp = matrix[i][j];
             matrix[i][j] = matrix[n-i-1][n-j-1];
             matrix[n-i-1][n-j-1] = temp; 
         }
     }
     disp(matrix,n);
}
int main(){
    int matrix[][3]={{1,2,3},
                     {4,5,6},
                     {7,8,9}};
    int row = sizeof(matrix[0])/sizeof(matrix);
    int col = sizeof(matrix[0][0])/sizeof(matrix[0]);
    rotate(matrix,3);
    return 0;
}
