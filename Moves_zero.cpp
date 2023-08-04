#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={0,1,0,2,0,3,0};
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            continue;
        }else{
            arr[j] = arr[i];
            j++;
        }
    }
    while(n-j){
        arr[j] = 0;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}