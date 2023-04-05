class Solution {
public:
     bool ok = 0;
    int func(int ind, vector<int>&arr, vector<int>&dp){
        if(ind >= arr.size()) return 0;
        if(ind < 0) return 0;
        if( arr[ind] == 0) ok = 1;
        if(dp[ind] != -1) return dp[ind];  
         dp[ind] = 1;
        int op1 = func(ind + arr[ind], arr, dp);
        dp[ind] = 1;
        int op2 = func(ind - arr[ind], arr, dp);
        return dp[ind];
        
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int>dp(arr.size() + 1, - 1);
         func(start, arr, dp);
        return ok==1;
    }
    
};

