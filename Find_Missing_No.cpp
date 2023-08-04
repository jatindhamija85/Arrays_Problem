#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {3, 0, 1, 4};
    int sum = (n * (n + 1)) / 2;
    int s1 = 0;
    for (int i = 0; i < n; i++)
    {
        s1 += arr[i];
    }
    cout << sum - s1;
}