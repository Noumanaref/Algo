class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(int i = 0; i < s.size(); i++) {
            char chr = s[i];

            if(chr == '(' || chr == '[' || chr == '{') {
                stk.push(chr);
            }
            else {
                if(!stk.empty()) {
                    if(stk.top() == '(' && chr == ')' || stk.top() == '[' && chr == ']' || stk.top() == '{' && chr == '}' ) {
                        stk.pop();
                    }
                    else {
                        return false;
                    }
                } 
                else {
                    return false;
                }      
            }
        }

        return stk.empty(); 
    }
};