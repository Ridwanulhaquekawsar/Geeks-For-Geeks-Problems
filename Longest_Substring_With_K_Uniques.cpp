class Solution {
  public:
    int longestKSubstr(string &s, int k){
        int l=0;
        int mx=-1;
        unordered_map<char,int>mp;
        
        for(int r=0; r<s.size(); r++){
            mp[s[r]]++;
            
            while(mp.size()>k){
                mp[s[l]]--;
                
                if(mp[s[l]]==0) mp.erase(s[l]);
                
                l++;
            }    
            
            if(mp.size()==k) mx=max(mx,r-l+1);
        }
        
        return mx;
    }
};
