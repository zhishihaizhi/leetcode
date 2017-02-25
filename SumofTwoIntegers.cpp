class Solution {
public:
    int getSum(int a, int b) {
        int temp = a;
        int ans = b;
        while(temp!=0)
        {
            int x = ans;
            ans = ans^temp;
            temp = temp&x;
            temp = temp<<1;
        }
        return ans;
    }
};