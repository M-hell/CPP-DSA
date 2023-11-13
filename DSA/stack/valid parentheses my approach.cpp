 bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            if(s[i]==')')
            {
                if(st.top()=='(')
                {
                    st.pop();
                }
            }
            if(s[i]=='}')
            {
                if(st.top()=='{')
                {
                    st.pop();
                }
            }
            if(s[i]==']')
            {
                if(st.top()=='[')
                {
                    st.pop();
                }
            }
        }
        if(st.empty()==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }