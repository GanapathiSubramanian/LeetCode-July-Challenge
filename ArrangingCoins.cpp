//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0)
            return 0;
        int ctr=0;
        while(n>0){
            ctr++;
            n=n-ctr;
            if(n<=ctr)
                break;
        }
        return ctr;
    }
};
