class Solution {
public:
int help(int n)
{
    int sum=0;
    while(n)
    {
        int rem=n%10;
        sum+=rem*rem;
        n/=10;
    }
    return sum;
}
    bool isHappy(int n) {
       /* if(n<10)
        {
            if(n==1 || n==7)
            return 1;
            return 0;
        }
        long long int sum=0;
        while(n>0)
        {
            int ls=(n%10);
            sum+=ls*ls;
            n/=10;
        }
        return isHappy(sum);*/
        int slow=n,fast=n;
        do
        {
            slow=help(slow);
            fast=help(help(fast));
        }while(slow!=fast);
        return slow==1;


        
    }
}; 
