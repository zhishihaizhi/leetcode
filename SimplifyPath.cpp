class Solution {
public:
    string simplifyPath(string path) {
        int len = path.length();
        stack<string> st;
        int site=0;
        while(site<len)
        {
            while(site<len&&path[site]=='/')
                site++;
            string temp = "";
            while(site<len&&path[site]!='/')
            {
                temp+=path[site];
                site++;
            }
            if((!st.empty())&&temp=="..")
                st.pop();
            if(temp!=""&&temp!=".."&&temp!=".")
                st.push(temp);
        }
        string ans = "";
        if(st.empty())
            return "/";
        while(!st.empty())
        {
            string temp = "/";
            temp += st.top();
            st.pop();
            temp += ans;
            ans = temp;
        }
        return ans;
    }
};