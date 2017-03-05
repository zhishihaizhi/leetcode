class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        //val2index
        map<int,int> mp;
        vector<string> ans(nums.size());
        for(size_t i = 0;i<nums.size();i++)
        {
            mp.insert(pair<int,int>(nums[i],i));
        }
        int count = nums.size();
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            string temp;
            if(count == 1)
                temp = "Gold Medal";
            else if(count ==2)
                temp = "Silver Medal";
            else if(count == 3)
                temp = "Bronze Medal";
            else 
                temp = to_string(count);
            ans[it->second] = temp;
            count--;
        }
        return ans;
    }
};