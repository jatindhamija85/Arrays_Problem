#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,2,4};
    int n = 3;
    int k = 6;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i] + arr[j]) == k){
                cout<< i << " "<<j;
                break;
            }
        }
    }
}