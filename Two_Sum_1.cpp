#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {3,2,4};
    int n = 3;
    int k = 6;
    map <int ,int> mpp;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int more = k - num;
        if(mpp.find(more) != mpp.end()){
            cout<<mpp[more]<<" "<<i;
            break;
        }
        mpp[num] = i;
    }
}