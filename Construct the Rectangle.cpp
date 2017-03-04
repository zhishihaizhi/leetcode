class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans;
        int wid = sqrt(area);
        while(wid>1)
        {
            if(area%wid==0)
            {
                int len = area/wid;
                ans.push_back(len);
                ans.push_back(wid);
                return ans;
            }
            wid--;
        }
        ans.push_back(area);
        ans.push_back(1);
        return ans;
    }
};