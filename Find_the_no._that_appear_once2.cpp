#include <bits/stdc++.h>
using namespace std;
//using map
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            cout << it.first;
            break;
        }
    }
}