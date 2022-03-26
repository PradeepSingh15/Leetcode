//1st solution will be naive approach of O(n^2) time complexity and O(1) space complexity.
//2nd solution will be better solutioni of O(n) time complexity and O(n) space complexity as well.
//2nd solution is solved below.

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n <= 2)
            return 0;
        
        vector<int> left(n), right(n);
        
        left[0] = 0;
        int lmax = height[0];
        for(int i=1; i<n; i++){           //storing left max value in left array
            left[i] = lmax;
            lmax = max(lmax, height[i]);
        }
        
        right[n-1] = 0;
        int rmax = height[n-1];
        for(int i=n-2; i>=0; i--){      //storing right max value in right array
            right[i] = rmax;
            rmax = max(rmax, height[i]);
        }
        
        int ans = 0;
        for(int i=1; i<n-1; i++){
            if(height[i] < left[i] & height[i] < right[i])
                ans += min(left[i], right[i]) - height[i];
        }
        
        return ans;
    }
};

//3rd solution is the best solution with time complexity of O(n) and space complexity of O(1).

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n <= 2)
            return 0;
        
        int lmax = height[0];
        int rmax = height[n-1];
        int left = 1, right = n-2, ans = 0;
        
        while(left <= right){
            if(lmax < rmax){
                if(height[left] >= lmax)
                    lmax = height[left];
                else
                    ans += lmax - height[left];
                left++;
            }
            else{
                if(height[right] > rmax)
                    rmax = height[right];
                else
                    ans += rmax - height[right];
                right--;
            }
        }
        
        return ans;
    }
};