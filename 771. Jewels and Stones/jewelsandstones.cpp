class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j;
        for(int i=0; i<jewels.size(); i++)
            j.insert(jewels[i]);
        int res = 0;
        for(int i=0; i<stones.size(); i++)
        {
            if(j.find(stones[i]) != j.end())
                res++;
        }
        return res;
    }
};