#include<bits/stdc++.h>
using namespace std;


bool check_plaindrome(int n){
    int copy = n;
        
    int rev =0, div =0;

    while (n != 0)
    {
        
        div = n % 10;
        rev = rev * 10 + div;
        n = n / 10;
    }
    
    if(copy==rev){
        return true;
    }else
        return false;
}

int main(){
    int n;
    cout<<"Enter A Number";
    cin>>n;
    cout<<check_plaindrome(n);
    return 0;
}