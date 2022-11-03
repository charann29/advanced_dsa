#include <bits/stdc++.h>
using namespace std;
void pwsetHelper(vector<int> &v, int i, vector<int> subset, vector<vector<int>> &ans)
{
    if (i == v.size())
    {
        ans.push_back(subset);
        return;
    }
    // This is Recursion and BackTracking!!
    subset.push_back(v[i]);
    pwsetHelper(v, i + 1, subset, ans);
    subset.pop_back();
    pwsetHelper(v, i + 1, subset, ans);
}

vector<vector<int>> pwset(vector<int> v)
{
    // Write your code here
    vector<vector<int>> ans;
    vector<int> subset;
    pwsetHelper(v, 0, subset, ans);
    return ans;
}


