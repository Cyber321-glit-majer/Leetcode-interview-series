class Solution {
public:
    int climbStairs(int n) {
        int one=1,two=1,three=1;
        for(int i=2;i<n+1;i++)
        {
            three=one+two;
            one=two;
             two=three;

        }   
        return three;
    }
};
