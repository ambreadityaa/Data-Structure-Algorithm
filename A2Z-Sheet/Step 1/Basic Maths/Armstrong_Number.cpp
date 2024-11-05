#include<bits/stdc++.h>
using namespace std;


void armstrong(int n){
    int sum=0,d=0,copy=n;
    while(n!=0){
        d = n%10;
        sum = sum+(d*d*d);
        n=n/10;
    }
    
    if(sum==copy){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
}

int main(){
 int n;
 cout<<"Enter a Number ";
 cin>>n;
 
 armstrong(n);
 
}