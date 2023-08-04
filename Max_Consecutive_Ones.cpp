#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            max_count = max(max_count, count);
        }
        else
            count = 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (nums[i] == 1)
    //     {
    //         count++;
    //         cout << "count " << count << endl;
    //     }
    //     else
    //     {
    //         if (temp < count)
    //         {
    //             temp = count;
    //             cout << "temp " << temp << endl;
    //             count = 0;
    //         }else{
    //             count = 0;
    //         }
    //     }
    // }
    cout << max_count;
}
