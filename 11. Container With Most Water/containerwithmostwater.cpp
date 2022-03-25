class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int res = INT_MIN;
        int i = 0, j = n-1;
        while(i<j){
            int vol = (j-i) * (min(height[j], height[i]));
            res = max(res, vol);
            if(height[j] > height[i])
                i++;
            else
                j--;
        }
        return res;
    }
};