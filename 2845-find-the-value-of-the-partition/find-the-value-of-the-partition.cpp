class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mini=INT_MAX;

        for(int i=0;i<n-1;i++){
           int diff= abs(nums[i]-nums[i+1]);

           mini=min(mini,diff);
           
        }
        return mini;
    }
};