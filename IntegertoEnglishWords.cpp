class Solution {
public:
    string num2word(int num)
    {
        string ans;
        if(num==0)
            return "";
        int temp = num/100;
        if(temp)
        {
            ans+=oneword.at(temp);
            ans+=" Hundred ";
        }
        temp = num%100; 
        if(temp==0)
            return ans;
        if(temp<20)
        {
            ans+=oneword.at(temp);
            ans+=" ";
        }
        else
        {
            temp = temp/10;
            ans+=tenword.at(temp);
            ans+=" ";
            if(num%10!=0)
            {
                ans +=oneword.at(num%10);
                ans += " ";
            }
        }
        return ans;
    }
    string numberToWords(int num) {
        string ans = "";
        if(num==0)
            return "Zero";
        if(num/1000000000!=0)
        {
            ans+=num2word(num/1000000000);
            ans+="Billion ";
        }
        num = num%1000000000;
        if(num/1000000!=0)
        {
            ans+=num2word(num/1000000);
            ans+="Million ";
        }
        num = num%1000000;
        if(num/1000!=0)
        {
            ans+=num2word(num/1000);
            ans+="Thousand ";
        }
        num = num%1000;
        ans+=num2word(num);
        return ans.substr(0,ans.size()-1);
    }
    private:
    vector<string> tenword = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    vector<string> oneword = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
};