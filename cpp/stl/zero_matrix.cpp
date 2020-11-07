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
    vector<int> row;
    vector<int> col;
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(list[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
    for(int i=0;i<row.size();i++)
        for(int j=0;j<size;j++)
            list[row[i]][j]=0;
    for(int j=0;j<col.size();j++)
        for(int i=0;i<size;i++)
            list[i][col[j]]=0;
}

int main(){
    int arr[][3]={{0,1,1},{1,1,1},{1,1,0}};
    //find position of zero - row,column
    putzero(arr,3);
    disp(arr,3);
    return 0;
}
