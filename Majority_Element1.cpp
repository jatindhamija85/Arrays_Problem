#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 2, 1, 1, 1, 2, 2};
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "i " << i << endl;
        mpp[v[i]]++;
    }
    int j = 0;
    for (auto it : mpp)
    {
        cout << "j " << j << endl;
        if (it.second > v.size() / 2)
        {
            cout << it.first;
        }
    }
    return 0;
}