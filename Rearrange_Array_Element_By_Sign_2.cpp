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
    if(pos.size() < neg.size()){
        for(int i=0;i<pos.size();i++){
            v[2*i] = pos[i];
            v[2*i+1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i=pos.size();i<neg.size();i++){
            v[index] = neg[i];
            index++;
        } 
    }else{
        for(int i=0;i<neg.size();i++){
            v[2*i] = pos[i];
            v[2*i+1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i=neg.size();i<pos.size();i++){
            v[index] = pos[i];
            index++;
        }
    }
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }
    return 0;
}