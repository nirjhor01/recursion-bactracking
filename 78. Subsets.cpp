class Solution {
public:
void recur(int ind, vector<int>nums, vector<int>ds, vector<vector<int>>&ans, int len){
    if(ind == len){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[ind]);
    recur(ind + 1, nums, ds, ans, len);
    ds.pop_back();
    recur(ind + 1, nums, ds, ans, len);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        int len = nums.size();
        vector<vector<int>>ans;
        recur(0, nums, ds, ans, len);
        return ans;
    }
};
