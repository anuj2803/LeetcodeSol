class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        vector<int>v;
        bool flg=false;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                flg=true;
               v.push_back(it.first);
            }
        }
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
if(flg){
    return v[0];
}else
return min(nums1[0]*10+nums2[0],nums2[0]*10+nums1[0]);
    }
    
};