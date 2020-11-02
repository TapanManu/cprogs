#include <iostream>
#include <bits/stdc++.h>
#define R 4
#define C 4

using namespace std;

int maxrow=R;
int maxcol=C;

int main(){
    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};   
    
    //O(M*N) solution ==> time

    int i=0,j=0;
    int row=0,col=0;
    
    while(row<maxrow && col<maxcol){
        for(j=col;j<maxcol;j++){
            cout<<arr[row][j]<<'\t';
        }
        row++;
        for(i=row;i<maxrow;i++){
            cout<<arr[i][maxcol-1]<<"\t";
        }
        maxcol--;
        if(row<maxrow){
            for(j=maxcol-1;j>=col;j--){
                cout<<arr[maxrow-1][j]<<'\t';
            }
            maxrow--;
        }
        if(col<maxcol){
            for(i=maxrow-1;i>=row;i--){
                cout<<arr[i][col]<<"\t";
            }
            col++;
        }
    }

    cout<<endl;

    return 0;
}
