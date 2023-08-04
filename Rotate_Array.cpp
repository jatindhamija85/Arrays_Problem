#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {1,2,3,4,5,6,7};
    int k=3;
    k%=n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i] = arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i]; 
        
    }
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}