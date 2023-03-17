class Solution {
public:
void perm(int sz, vector<int>ds, vector<vector<int>>&ans, vector<int>nums, int mp[]){
    if(ds.size() == sz){
        ans.push_back(ds);
        return;
    }
    for(int i = 0; i < sz; i++){
        if(mp[i] == 0){
            ds.push_back(nums[i]);
            mp[i] = 1;
            perm(sz, ds, ans, nums, mp);
            mp[i] = 0;
            ds.pop_back(); // backtrack and delete the element which is top of the satck, then repet the process
    }
}
}
    vector<vector<int>> permute(vector<int>& nums) {
        int sz = nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        int mp[sz + 1];
        for(int i = 0; i < sz; ++i) mp[i] = 0;
        perm(sz, ds, ans, nums, mp);
        return ans;
    }
};

/*
array = {1, 2, 3}
Fisrt the stack is empty []
[]
| | |                
1 2 3     
  
(1)
|
2 [1,2]
|
3 [1,2,3]        

(1)
|
3 [1,3]
|
2[1,3,2]   

(2)
|
3 [2,3]
|
1 [2,3,1]  

(2)
|
1 [2,1]
|
2 [2,1,3]  





[1] > [1,2] > [1,2,3]
backtrack
now we are int the [1,2] stage but no other way to take any element
so backtrack
then, [1,3] > [1,3,2]
now stack is empty
[2] > [2,3] > [2,3,1]

*/


