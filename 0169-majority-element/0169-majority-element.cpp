class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        int cnt=0;
        int ele=0;
       for(int num:nums){
          if(cnt==0){
              ele=num;
          }
          if(ele==num){
              cnt++;
          }else{
              cnt--;
          }
       }return ele;
    }
};