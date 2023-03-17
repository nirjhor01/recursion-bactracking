class Solution {
public:
void recur(int ind, vector<int>ds, vector<vector<int>>&ans,vector<int>nums, int len){
    if(ind == len){
        sort(ds.begin(),ds.end());
        ans.push_back(ds);
        return;

    }
    ds.push_back(nums[ind]);
    recur(ind + 1, ds, ans,nums, len);
    ds.pop_back();
    recur(ind + 1, ds, ans,nums, len);// not taking element and approching to the BASE CASE state.
    
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int len = nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        recur(0, ds, ans,nums, len);
        sort( ans.begin(), ans.end() );
        ans.erase( unique(ans.begin(), ans.end()), ans.end() );
        return ans;
    }
};
