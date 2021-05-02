    class Solution {
    public:
        string countAndSay(int n) {
            string res = "1";
            for(int i = 1; i < n; i++)
            {
                string temp = "";
                for(int j = 0; j < res.size(); j++)
                {
                    int count = 1;
                    char c = res[j];
                    while(res[j+1] == c)
                    {
                        count++;
                        j++;
                    }
                    char c1 = '0' + count;
                    temp = temp + c1 + c;
                }
                res = temp;
            }
            return res;
        }
    };