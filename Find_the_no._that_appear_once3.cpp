#include <bits/stdc++.h>
using namespace std;
// using XOR
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int xorr = 0;
    for (int i = 0; i < n; i++)
    {

        xorr = xorr ^ arr[i];
    }
    cout << xorr;
}