#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {3,4,5,6,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[n-1] > arr[0]){
        count++;
    }
    if(count <= 1){
        cout<<"true";
    }else{
        cout<<"false";
    }
}