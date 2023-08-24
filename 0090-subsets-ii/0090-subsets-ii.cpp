class Solution {

void subset(vector<int>& nums,int ind,int n,vector<vector<int>>&aj,vector<int>&v){
      if(ind==n){
          aj.push_back(v);return;
      }
      v.push_back(nums[ind]);
      subset(nums,ind+1,n,aj,v);
      v.pop_back();
      while(ind+1<nums.size() &&nums[ind]==nums[ind+1]){
          ind++;
      }
      subset(nums,ind+1,n,aj,v);
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>aj;
        sort(nums.begin(),nums.end());
        vector<int>v;
        int n=nums.size();
        int ind=0;
        subset(nums,ind,n,aj,v);
        return aj;
    }
};