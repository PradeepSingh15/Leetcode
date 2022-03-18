int total(string s)
    {
        int ans = 0;
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i] == ' ')
                ans++;
        }
        
        return ans+1;
    }
    
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(auto i : sentences)
            res = max(res, total(i));
        
        return res;
    }