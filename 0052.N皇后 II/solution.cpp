class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<bool>> mapS;
        for(int i = 0; i < n; i++)
        {
            vector<bool> temp;
            for(int j = 0; j < n; j++)
            {
                temp.push_back(false);
            }
            mapS.push_back(temp);
        }
        int res = 0;
        DFS(mapS, res, 0);
        return res;
    }

    void DFS(vector<vector<bool>> mapS, int& num, int line)
    {
        if(line == mapS.size())
        {
            num++;
            return;
        }
        for(int i = 0; i < mapS.size(); i++)
            if(Judge(mapS, line, i))
            {
                mapS[line][i] = true;
                DFS(mapS, num, line+1);
                mapS[line][i] = false;
            }
    }
    
    bool Judge(vector<vector<bool>> mapS, int line, int row)
    {
        for(int i = line - 1; i >= 0; i--)
        {
            if(mapS[i][row])
                return false;
            for(int j = 0; j < mapS.size(); j++)
                if(mapS[i][j] && (abs(line - i) == abs(row - j)))
                    return false;
        }
        return true;
    }
};