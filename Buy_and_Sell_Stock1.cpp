#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int maxpro = 0;
    int minPrice = INT_MAX;
    for(int i=0;i<v.size();i++){
        minPrice = min(minPrice,v[i]);
        maxpro = max(maxpro , v[i] - minPrice);
    }
    cout<<maxpro;
    return 0;
}