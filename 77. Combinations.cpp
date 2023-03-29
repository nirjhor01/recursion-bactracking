class Solution {
public:
    void solve(int ind, int n, int k,vector<vector<int>>&ans,vector<int>&ds){
        if(ind > n){
            if(ds.size() == k) ans.push_back(ds);
            return;
        }
        ds.push_back(ind);
         solve(ind + 1, n, k, ans, ds);
        ds.pop_back();
         solve(ind + 1, n, k,ans, ds);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(1, n, k, ans, ds);
        return ans;
    }
};
