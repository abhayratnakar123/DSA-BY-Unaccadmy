#include<iostream>
#include<climits>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
    int ans  = INT_MIN, sum = 0;
 
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
        if (ans < sum)
        ans = sum;
 
        if (sum < 0)
            sum = 0;
    }
    return ans;
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int a[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << "Maximum contiguous sum is " << maxSubArraySum(a,8);
    return 0;
}