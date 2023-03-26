class Solution {
public:
int solve(int n, vector<int>&v){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(v[n] != -1) return v[n];
    int op1 = solve(n - 1, v);
    int op2 = solve(n - 2, v);
    return v[n] = op1 + op2;
}
    int climbStairs(int n) {
        vector<int>v(n + 1, -1);
        return solve(n, v);
        
    }
};
