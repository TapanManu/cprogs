#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int input=0,power=0;
    scanf("%d,%d",&input,&power);

    double res=1;
    bool sign = false;      //indicates for positive
    sign = power<0?true:false;
    power = abs(power);
    for(int i=0;i<power;i++){
        res*=input;
    }
    if(sign){
        res = 1/res;
    }
    printf("%f",res);
    return 0;
}
