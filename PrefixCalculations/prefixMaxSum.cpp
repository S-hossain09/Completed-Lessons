/*
 *  Description: This code calculates the prefix maximum and prefix sum of an array.
 *  Verification: https://codeforces.com/contest/2104/problem/B
 *  Time Complexity: O(1) after preprocessing
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {13, 5, 10, 14, 8, 15, 13};
    int n = arr.size();

    vector<int> pmax(n + 1);       // prefix maximum
    vector<long long> psum(n + 1); // prefix sum

    for (int j = 0; j < n; j++)
    {
        pmax[j + 1] = max(pmax[j], arr[j]);
        psum[j + 1] = psum[j] + arr[j];
    }
    // main implemention.
    return 0;
}