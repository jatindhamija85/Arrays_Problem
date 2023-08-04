#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {10,20,30,40,50,60,70};
    int num = 47;
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            cout<<i;
            break;
        }
    }
    cout<<"Not Found";
}