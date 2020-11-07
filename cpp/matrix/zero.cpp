#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void disp(int arr[][3],int size){
    for(int i=0;i<size;i++){
        cout<<endl;
        for(int j=0;j<size;j++)
            cout<<arr[i][j]<<"\t";
    }
}

int putzero(int list[][3],int size){
    int row=-1,col=-1;
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(list[i][j]==0){
                row=i;
                col=j;
            }
    for(int j=0;j<size;j++)
        list[row][j]=0;
    for(int i=0;i<size;i++)
        list[i][col]=0;
}

int main(){
    int arr[][3]={{1,0,1},{1,1,1},{1,1,1}};
    //find position of zero - row,column
    putzero(arr,3);
    disp(arr,3);
    return 0;
}
