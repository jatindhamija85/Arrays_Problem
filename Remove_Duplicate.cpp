#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,1,2,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int len = 1;
    for(int i=1;i<n;i++){
        if(arr[i-1] != arr[i]){
            arr[len] = arr[i];
            len++;
        }
    }
    cout<<len;
}