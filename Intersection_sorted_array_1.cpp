#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    int a[n] = {1, 2, 2, 3, 4, 5};
    int m = 4;
    int b[m] = {2, 3, 4, 6};
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}