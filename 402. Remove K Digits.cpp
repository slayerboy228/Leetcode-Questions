class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        if (k == num.length())
            return "0";

        stack<char> st;
        for (int i = 0; i < num.length(); i++) {
            while (!st.empty() && k > 0 && (st.top() - '0') > (num[i] - '0')) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        if (st.empty())
            return "0";
        
        string res = "";
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        while (res.length() > 0 && res.back() == '0') {
            res.pop_back();
        }

        reverse(res.begin(), res.end());

        if (res.length() == 0)
            return "0";
        
        return res;
    }
};
