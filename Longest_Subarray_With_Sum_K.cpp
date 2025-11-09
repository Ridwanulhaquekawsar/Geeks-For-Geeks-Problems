class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<int,int>mp;
        mp[0]=-1;
        
        int sum=0;
        int mx=0;
        
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            
            if(mp.find(sum)==mp.end()) mp[sum]=i;
            
            if(mp.find(sum-k)!=mp.end()) mx=max(mx,i-mp[sum-k]);
        }
        
        return mx;
    }
};
