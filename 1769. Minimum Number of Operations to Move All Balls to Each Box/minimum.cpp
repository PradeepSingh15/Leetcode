class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n);
        
        for (int i = 0, count = 0, move = 0; i < boxes.length(); ++i)
        {
            ans[i] += move;
            count += boxes[i] - '0';
            move += count;
        }
        
        for (int i = boxes.length() - 1, count = 0, move = 0; i >= 0; --i)
        {
            ans[i] += move;
            count += boxes[i] - '0';
            move += count;
        }
        
        return ans;
    }
};