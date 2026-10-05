class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(0);
            }
            else {
                int val=st.top();
                st.pop();
                int score=max(2*val,1);
                int val2=score+st.top();
                st.pop();
                st.push(val2);
            }
        }
        return st.top();
    }
};