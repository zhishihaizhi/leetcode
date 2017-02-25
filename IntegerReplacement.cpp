class Solution {
public:
    long intrep(long temp)
    {
        if(temp==0)
            return 1;
        if(temp==1)
            return 0;
        if(temp%2==0)
            return intrep(temp/2)+1;
        else 
            return min(intrep(temp+1),intrep(temp-1))+1;
    }
    int integerReplacement(int n) {
        long temp = n;
        return intrep(temp);
    }
};