#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
    // Initializing array 
    int ar[6] =  {1, 2, 3, 4, 5, -6}; 
  
    // Checking if all elements are positive 
    all_of(ar, ar+6, [](int x) { return x>0; })? 
          cout << "All are positive elements" : 
          cout << "All are not positive elements"; 

    cout<<endl;

    any_of(ar, ar+6, [](int x) { return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 

    cout<<endl;

    none_of(ar, ar+6, [](int x){ return x<0; })? 
          cout << "No negative elements" : 
          cout << "There are negative elements"; 

    cout<<endl;

    int ar1[6];         //size cannot exceed source array ,garbage value might come
    copy_n(ar,6,ar1);

    cout << "The new array after copying is : "; 
    for (int i=0; i<6 ; i++) 
       cout << ar1[i] << " "; 

    cout<<endl;

    int ar2[6];

    // Using iota() to assign values 
    iota(ar2, ar2+6, 20); 

    cout << "The new array  is : "; 
    for (int i=0; i<6 ; i++) 
       cout << ar2[i] << " "; 

    cout<<endl;
    return 0; 
} 
