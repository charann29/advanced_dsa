#include <bits/stdc++.h>
using namespace std;
void perm(int pos, string &str, vector<string> &ans)
{
    if (pos >= str.size())
    {
        ans.push_back(str);
    }
    for (int i = pos; i < str.size(); i++)
    {
        swap(str[i], str[pos]);
        perm(pos + 1, str, ans);
        swap(str[i], str[pos]); // Backtracking
    }
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    perm(0, str, ans);
    sort(ans.begin(), ans.end());
    return ans;
}