class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        stack<char>re;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]==')' && st.top()=='('){
                st.pop();
            }
            else{
                    re.push(s[i]);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans++;
            st.pop();
        }
         int res=0;
        while(!re.empty()){
            res++;
            re.pop();
        }
        return ans+res;
    }
};