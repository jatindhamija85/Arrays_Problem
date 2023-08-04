#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int maxpro = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if(v[i] < v[j]){
                maxpro = max((v[j] - v[i]),maxpro);
            }
        }
    }
    cout<<maxpro;
    return 0;
}