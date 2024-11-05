#include<bits/stdc++.h>
using namespace std;


void checkPrime(int n){
    
    int count = 0;
    
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    } 
    if(count>2){
        cout<<"NOT PRIME";
    }
    else{
        cout<<"Prime";
    }
}

int main(){
    
    int n;
    cout<<"Enter a Number";
    cin>>n;
    checkPrime(n);
    
}