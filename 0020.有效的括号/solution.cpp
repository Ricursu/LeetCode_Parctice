class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0 || s.size()%2==1) return false;
        char str[10001];
        int top = 0;
        for(int i = 0; i < s.size(); i++)
        {
            str[top++] = s[i];
            if(str[top-1] == '}' || str[top-1] == ']' || str[top-1] == ')')
            {
                if(top == 1)    return false;
                if(str[top-1] == '}' && str[top-2] != '{')
                    return false;
                if(str[top-1] == ')' && str[top-2] != '(')
                    return false;
                if(str[top-1] == ']' && str[top-2] != '[')
                    return false;
                top = top - 2;
            }
        }

        return top == 0;
    }
};