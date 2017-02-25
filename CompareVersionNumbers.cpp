class Solution {
public:
    int compareVersion(string version1, string version2) {
        int site1 = 0, site2 = 0;
        int len = 0;
        int i = version1.length()-1;
        while(site1<version1.length()&&site2<version2.length())
        {
            int num1 = 0;
            int num2 = 0;
            while(site1<version1.length()&&version1[site1]=='.')
                site1++;
            while(site2<version2.length()&&version2[site2]=='.')
                site2++;
            while(site1<version1.length()&&version1[site1]!='.')
            {
                num1 = num1*10 +version1[site1]-'0';
                site1++;
            }
            while(site2<version2.length()&&version2[site2]!='.')
            {
                num2 = num2*10 +version2[site2]-'0';
                site2++;
            }
            if(num1<num2)
                return -1;
            if(num1>num2)
                return 1;
        }
        while(site1<version1.length()&&(version1[site1]=='0'||version1[site1]=='.'))
            site1++;
        while(site2<version2.length()&&(version2[site2]=='0'||version2[site2]=='.'))
            site2++;
        if(site1==version1.length()&&site2==version2.length())
            return 0;
        if(site1<version1.length())
            return 1;
        else
            return -1;
    }
};