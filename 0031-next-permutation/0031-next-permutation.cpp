class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
        // int a=*max_element(nums.begin(), nums.end());
        // cout<<a;
        // int i=a;
        // int j=a;
        int ans=-1;
        for(int i=n-2;i>=0;i--){
             if(nums[i]<nums[i+1]){
                 ans=i;
                 break;
             }
        }
            
  for(int i=n-1;i>=ans &&ans!=-1;i--){
        if(nums[ans]<nums[i]){
                swap(nums[i],nums[ans]);
                break;
          }
    }


reverse(nums.begin() + ans+1, nums.end());



        }
    
};