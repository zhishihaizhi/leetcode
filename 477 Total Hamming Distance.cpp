class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        vector<int> ones;
        for(int i = 0;i <nums.size();i++){
            int n = nums[i];
            int count = 0;
            while(n){
                int x = n&1;
                if(x){
                    if(count>=ones.size())
                        ones.resize(count+1);
                    ones[count]++;
                }
                n = n>>1;
                count++;
            }
        }
        int ans = 0;
        int len  = nums.size();
        for(int i = 0;i <ones.size(); i++){
            ans = ans+(ones[i])*(len-ones[i]);
        }
        return ans;
    }
};


//统计每个位置上1和0的个数，hammingdistance = ones*zeros;
