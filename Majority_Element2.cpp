#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 2, 1, 1, 1, 2, 1,2,2,2,2,2,1};
    int count = 0; 
    int ele;
    for(int i=0;i<v.size();i++){
        if(count == 0){
            count++;
            ele = v[i];
        }else if(ele == v[i]){
            count++;
        }else{
            count--;
        }
    }
    int cnt = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i] == ele){
            cnt++;
        }
    }
    if(cnt > (v.size()/2)){
        cout<< ele;
    }
    return 0;
} 