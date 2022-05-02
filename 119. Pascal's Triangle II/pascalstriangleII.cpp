class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> p;
        long long int res = 1;
        p.push_back(1);
        
        for(int i=0; i<rowIndex; i++){
            res *= (rowIndex - i);
            res /= (i + 1);
            p.push_back(res);
        }
        return p;
    }
};