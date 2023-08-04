#include <bits/stdc++.h>
using namespace std;

// Optimal Approach
int main()
{
    int arr[6] = {50, 30, 60, 20, 80, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int small = INT_MAX, sec_small = INT_MAX;
    int lar = INT_MIN, sec_lar = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            sec_small = small;
            small = arr[i];
        }
        else if (arr[i] < sec_small && arr[i] != small)
        {
            sec_small = arr[i];
        }
        if (arr[i] > lar)
        {
            sec_lar = lar;
            lar = arr[i];
        }
        else if (arr[i] > sec_lar && arr[i] != lar)
        {
            sec_lar = arr[i];
        }
    }
    cout << small << endl;
    cout << sec_small << endl;
    cout << lar << endl;
    cout << sec_lar << endl;
}

// Better Approach
// int main()
// {
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int small = INT_MAX, sec_small = INT_MAX;
//     int lar = INT_MIN, sec_lar = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         small = min(small, arr[i]);
//         lar = max(lar, arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < sec_small && arr[i] != small)
//         {
//             sec_small = arr[i];

//             cout << "sec small " << sec_small << endl;
//         }
//         if (arr[i] > sec_lar && arr[i] != lar)
//         {
//             sec_lar = arr[i];
//         }
//     }
//     cout << "sec small " << sec_small << endl;
//     cout << "sec lar " << sec_lar << endl;
// }

// Brute Force
//  int main(){
//      int arr[6] = {1,2,3,4,5,6};
//      int n=6;
//      sort(arr,arr+n);
//      cout<<arr[n-2]<<endl;
//      cout<<arr[1];
//  }