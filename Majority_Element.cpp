#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 2, 1, 1, 1, 2, 2};
    for (int i = 0; i < v.size(); i++)
    {
        cout << "i " << i << endl;
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            cout << "j " << j << endl;
            if (v[i] == v[j])
            {
                count++;
            }
        }
        cout<<endl;
        if (count > v.size() / 2)
        {
            cout << "ans " << v[i];
            break;
        }
    }
    return 0;
}