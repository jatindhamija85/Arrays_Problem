#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,2};
    for(int i=0;i<5;i++){
        if(arr[i] < arr[i+1]){
            continue;
        }else{
            cout<<"Not Sorted";
        }
    }
    cout<<"Sorted";
}