class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        if(num==0)
            return "0";
        long temp = num;
        if(temp<0)
        {
            temp = -temp;
        }
        while(temp)
        {
            string tempstr = to_string((int) (temp%7) );
            tempstr+=ans;
            ans = tempstr;
            temp = temp/7;
        }
        if(num<0)
        {
            string tempstr ="-";
            tempstr+=ans;
            ans = tempstr;
        }
        return ans;
    }
};
