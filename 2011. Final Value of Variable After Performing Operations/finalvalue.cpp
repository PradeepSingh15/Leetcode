int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0;
        for(int i=0; i<n; i++)
        {
            if(operations[i] == "X++" || operations[i] == "++X")
                x += 1;
            else
                x -= 1;
        }
        
        return x;
    }