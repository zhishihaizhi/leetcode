class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int h = matrix.size();
        if(h<1)
            return ans;
        int w = matrix[0].size();
        int i = 0,j = 0;
        bool up = true;
        while(true)
        {
            ans.push_back(matrix[i][j]);
            if(i==h-1&&j==w-1)
                break;
            if(up)
            {
                i = i - 1;
                j = j + 1;
                if(j>=w)
                {
                    up  = !up;
                    i = i + 2;
                    j = w-1;
                }
                else if(i<0)
                {
                    up  = !up;
                    i = 0;
                }
            }
            else
            {
                i = i + 1;
                j = j - 1;
                if(i>=h)
                {
                    up  = !up;
                    i = h-1;
                    j = j + 2;
                }
                else if(j<0)
                {
                    up  = !up;
                    j = 0;
                }
            }
        }
        return ans;
    }
};
