// Minimum Jumps

// Given an array arr[] of non-negative integers. Each array element represents the maximum length of the jumps that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x. Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element.

// Note:  Return -1 if you can't reach the end of the array.

// Examples : 

// Input: arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
// Output: 3 
// Explanation: First jump from 1st element to 2nd element with value 3. From here we jump to 5th element with value 9, and from here we will jump to the last. 
// Input: arr = [1, 4, 3, 2, 6, 7]
// Output: 2 
// Explanation: First we jump from the 1st to 2nd element and then jump to the last element.
// Input: arr = [0, 10, 20]
// Output: -1
// Explanation: We cannot go anywhere from the 1st element.
// Constraints:
// 2 ≤ arr.size() ≤ 106
// 0 ≤ arr[i] ≤ 105

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
          int n =  arr.size();
       
       if(n==1){
           return 0;
       }
       
       if(arr.at(0)==0){
           return -1;
       }
       
       int range = arr.at(0), sl=arr.at(0),jump=1;
       for(int i=1;i<n;i++){
            
            if(i==n-1){
                return jump;
            }           
            range=  max(range,i+arr.at(i));
            sl--;
            if(sl==0){
                jump++;
                if(range<=i)
                    return -1;
                sl = range -i;    
            }
       }
       return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends
