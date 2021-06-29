class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        while(columnNumber != 0){
            int t = columnNumber % 26;
            columnNumber = columnNumber / 26;
            columnNumber = t == 0 ? columnNumber - 1 : columnNumber;
            s = t == 0 ? "Z" + s : (char)('A' + t - 1) + s;
        }
        return s;
    }
};