#include <bits/stdc++.h>
using namespace std;

// Link to Problem

// Given a positive integer n, The task is to find the value of Σi from 1 to n F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

// Input: n = 5
// Output: 21
// Explanation:
// F(1) = 1
// F(2) = 1 + 2 = 3
// F(3) = 1 + 3 = 4
// F(4) = 1 + 2 + 4 = 7
// F(5) = 1 + 5 = 6
// So,  F(1) + F(2) + F(3) + F(4) + F(5)      = 1 + 3 + 4 + 7 + 6 = 21

//  https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

// Brute Force

// Implementation:
// Run a loop i from 1 to N.
// Run a loop while j*j is less than equal to i.
// If j is the divisor of i(i.e. i%j == 0).
// If (i / j) is equal to j then add j to the sum else add ( j + i / j) to the sum.
// Return sum.

class Solution_BRUTE

{
public:
    long long sumOfDivisors(int n)
    {
        // Write Your Code here

        long long copy = n;
        long long sum = 0;

        for (int i = 1; i <= n; i++)
        {

            for (long long j = 1; j * j <= i; j++)
            {
                if (i % j == 0)
                {

                    if ((i / j) == j)
                    {
                        sum = sum + j;
                    }
                    else
                    {
                        sum = sum + (j + i / j);
                    }
                }
            }
        }

        return sum;
    }
};

