#include<bits/stdc++.h>
using namespace std;

int main(){
    int m = 6;
    int n = 5;
    int a1[m] = {1,2,2,3,4,4};
    int a2[n] = {1,4,5,5,6};
    set<int> st;
    for(int i=0;i<m;i++){
        st.insert(a1[i]);
    }
    for(int i=0;i<n;i++){
        st.insert(a2[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}