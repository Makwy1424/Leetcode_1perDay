#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = 1;
        int maxi = 0, ct = 0, previous = -1 * m.begin()->first;

        for (auto &val : m)
        {
            if (ct == 0 || ((previous + 1) == val.first))
                ct++;
            else
            {
                maxi = max(maxi, ct);
                ct = 1;
            }
            previous = val.first;
        }
        return max(maxi, ct);
    }
};

int main()
{
}