class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sumofnat=n*(n+1)/2;
        int actualsum=0;
        
        for(auto it:nums)
        {
            actualsum=actualsum+it;
        }
        return sumofnat-actualsum;
        
    }
};