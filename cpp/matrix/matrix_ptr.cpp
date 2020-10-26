#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void disp(int mat[][3],int row,int col){
    int i=0,j=0;
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<< *(*(mat+i)+j)<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int mat[][3]={1,2,3,4,5,6,7,8,9};
    int row = sizeof(mat)/sizeof(mat[0]);
    int col = sizeof(mat[0])/sizeof(mat[0][0]);
    disp(mat,row,col);
    return 0;
}
