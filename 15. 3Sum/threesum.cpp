class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> ansSet;
        
        for(int i = 0; i <= n-3; i++){
            int j = i+1, k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ansSet.insert({nums[i], nums[j], nums[k]});
                    j++; k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        vector<vector<int>> ans(ansSet.begin(), ansSet.end());
        
        return ans;
    }
};