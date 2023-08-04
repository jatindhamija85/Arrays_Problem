#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,-4,-5};
    vector<int> ans(v.size(),0);
    int pos = 0;
    int neg = 1;
    for(int i=0;i<v.size();i++){
        if(v[i] > 0){
            ans[pos] = v[i];
            pos += 2;
        }else{
            ans[neg] = v[i];
            neg += 2;
        }
    }
    for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
    }
    return 0;
}