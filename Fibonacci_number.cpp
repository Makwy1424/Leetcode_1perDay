#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        vector<int> ans(32);
        ans[0] = 0;
        ans[1] = 1;

        for (int i = 2; i <= 30; i++)
        {
            ans[i] = ans[i - 1] + ans[i - 2];
        }
        return ans[n];
    }
};

int main()
{
}