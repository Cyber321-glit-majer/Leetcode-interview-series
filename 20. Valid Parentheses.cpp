class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        bool ans=1;
         for(int i=0;i<n;i++)
         {
             if(s[i]=='(' || s[i]=='[' || s[i]=='{')
             {
                 st.push(s[i]);
             }
             else if(s[i]==')')
             {
                 if(!st.empty() && st.top()=='(')
                 {
                     st.pop();
                 }
                 else{
                     ans=0;
                     break;
                 }
             }
              else if(s[i]==']')
             {
                 if(!st.empty() && st.top()=='[')
                 {
                     st.pop();
                 }
                 else{
                     ans=0;
                     break;
                 }
             }
              else if(s[i]=='}')
             {
                 if(!st.empty() && st.top()=='{')
                 {
                     st.pop();
                 }
                 else{
                     ans=0;
                     break;
                 }
             }
         }
        if(!st.empty())
        return 0;
        else
        return ans;
    }
};
