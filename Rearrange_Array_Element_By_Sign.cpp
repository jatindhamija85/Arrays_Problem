#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,-4,-5};
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<v.size();i++){
        if(v[i] < 0){
            neg.push_back(v[i]);
        }else{
            pos.push_back(v[i]);
        }
    }
    for(int i=0;i<v.size()/2;i++){
        v[2*i] = pos[i];
        v[2*i+1] = neg[i];
    }
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    return 0;
}