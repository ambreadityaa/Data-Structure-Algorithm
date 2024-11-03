#include <bits/stdc++.h>
using namespace std;

void bruteForce(int n){
    int count;
    int d;
    while(n>0){
        d=n%10;
        n=n/10;
        ++count;
      ;
    }
    
    cout<<"Brute Force :"<<count;
}

void optimized(int n){
    int count;
     // Initialize a variable 'cnt' to
    // store the count of digits.
    count = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
    
  
    cout<<"Optimized :"<<count;
    
}
int main(){
    
    int num;
    cout<<"Enter a Number ";
    cin>>num;
    
    optimized(num);
    
    return 0;
}