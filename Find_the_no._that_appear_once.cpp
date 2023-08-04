#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if(count == 1){
            cout<<nums[i] ;
            break;
        }
    }
    
}