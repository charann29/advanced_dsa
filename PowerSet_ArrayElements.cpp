#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pwsetHelper(vector<int> v, int i)
{
    vector<vector<int>> partialAns = pwsetHelper(v, i + 1);
    vector<vector<int>> ans;
    if (i >= v.size())
        return {{}};
    for (auto x : partialAns)
    {
        ans.push_back(x);
    }
    for (auto x : partialAns)
    {
        x.push_back(v[i]);
        ans.push_back(x);
    }
    return ans;
}

vector<vector<int>> pwset(vector<int> v)
{
    // Write your code here
    return pwsetHelper(v, 0);
}


// Another Approch in Part 2 of the same Code
