#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int a[n] = {1,2,2,3,4,5};
    int m = 4;
    int b[m] = {2,3,4,6};
    vector<int> ans;
    int vis[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j] && vis[j] == 0){
                ans.push_back(a[i]);
                vis[j] = 1;
                break;
            }
            if(a[i] < b[j]) break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}