#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {1,2,3,4,5,6,7};
    int k=3;
    k%=n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}