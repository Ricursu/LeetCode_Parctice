class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> t;
        int MAXINT = 99999999;
        int l1 = 0, l2 = 0;
        while(l1 < nums1.size() || l2 < nums2.size())
        {
            int t1 = MAXINT, t2 = MAXINT;
            if(l1 < nums1.size() )
                t1 = nums1[l1];
            if(l2 < nums2.size() )
                t2 = nums2[l2];
            int min = t1 > t2 ? t2 : t1;
            if(min == t1)
                l1++;
            else
                l2++;
            t.push_back(min);
        }
        double res = 0;
        if(t.size()%2!=0)
            res = t[t.size()/2];
        else
            res = (double)(t[t.size()/2 -1] + t[t.size()/2])/(double)2;
        return res;
    }
};