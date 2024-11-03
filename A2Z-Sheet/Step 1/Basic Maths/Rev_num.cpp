// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1 


#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    long copy = 0;
    int rev, div;

    while (x != 0)
    {
        if (copy > INT_MAX / 10 || copy < INT_MIN / 10)
        {
            return 0;
        }
        rev = x % 10;
        copy = copy * 10 + rev;
        x = x / 10;
    }
    return int(copy);
}