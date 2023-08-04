#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m = 6;
    int n = 5;
    int a1[m] = {1, 2, 2, 3, 4, 4};
    int a2[n] = {1, 4, 5, 5, 6};
    vector<int> temp;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a1[i] <= a2[j])
        {
            if (temp.size() == 0 || temp.back() != a1[i])
            {
                temp.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != a2[j])
            {
                temp.push_back(a2[j]);
            }
            j++;
        }
    }

    while (i < m)
    {
        if (temp.size() == 0 || temp.back() != a1[i])
        {
            temp.push_back(a1[i]);
        }
        i++;
    }
    while (j < n)
    {
        if (temp.size() == 0 || temp.back() != a2[j])
        {
            temp.push_back(a2[j]);
        }
        j++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}