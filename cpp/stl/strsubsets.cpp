#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void subsets(string s, string result = "", int i = 0) {
	if (i == s.length()) {
		cout << result << " ";
        
		return;
	}
    cout<<endl;
	subsets(s, result, i + 1);
	subsets(s, result + s[i], i + 1);
    
}

int main(){
    vector<int> num;
    int start=0;
    string str = "abc";
    string res="";
    subsets(str,res,start);

    return 0;
}
