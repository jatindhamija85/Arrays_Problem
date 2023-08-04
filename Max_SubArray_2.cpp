#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-7 -8 -16 -4 -8 -5 -7 -11 -10 -12 -4 -6 -4 -16 -10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "max " << maxi;
    return 0;
} 