class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;
        for(auto c:s)
            mp[c]++;
        int site = 0;
        while(site<s.length())
        {
            if(mp[s[site]]==1)
                return site;
            site++;
        }
        return -1;
    }
};
