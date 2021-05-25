class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int len = gas.size();
    int spare = 0;
    int minSpare = 9999999;
    int minIndex = 0;

    for (int i = 0; i < len; i++) {
        spare += gas[i] - cost[i];
        if (spare < minSpare) {
            minSpare = spare;
            minIndex = i;
        }
    }

    return spare < 0 ? -1 : (minIndex + 1) % len;
    }
};