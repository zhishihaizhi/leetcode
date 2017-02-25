class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        vector<int> temp(32);
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0; j < 32; j++)
            {
                temp[j] += (nums[i]>>j)&1;
            }
        }
        for(int i = 0;i<32;i++)
        {
            ans += (temp[i]%3)<<i;
        }
        return ans;
    }
};