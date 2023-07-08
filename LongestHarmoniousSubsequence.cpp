int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int len=0;
        for(int i=0;i<n;i++){ //to get frequency of each unique ele
            mp[nums[i]]++;
        }
        //now looping in map
        for(auto ele:mp){
            auto found=mp.find(ele.first+1);
            if(found!=mp.end()){
              len=max(len, ele.second+ found->second);
            }
        }
        return len;
    }