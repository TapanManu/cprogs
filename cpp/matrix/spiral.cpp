#include <iostream>
#include <bits/stdc++.h>
#define SIZE 4

using namespace std;

int maxrow=SIZE;
int maxcol=SIZE;

int main(){
    int arr[][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};   
    
    //O(N^2) solution n should be even
    int i=0,j=0;
    int row=0,col=0;
    int count=0;
    while(count<SIZE*SIZE){
        for(j=col;j<maxcol-col-1;j++){
            cout<<arr[row][j]<<'\t';
            count++;
        }
        for(i=row;i<maxrow-row-1;i++){
            cout<<arr[i][maxcol-col-1]<<"\t";
            count++;
        }
        for(j=maxcol-col-1;j>col;j--){
            cout<<arr[maxrow-row-1][j]<<'\t';
            count++;
        }
        for(i=maxrow-row-1;i>row;i--){
            cout<<arr[i][col]<<"\t";
            count++;
        }
        
        row++;
        col++;
    }

    cout<<endl;

    return 0;
}
