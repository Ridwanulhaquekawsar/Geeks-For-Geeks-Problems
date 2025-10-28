class Solution {
  public:
    int search(string &pat, string &txt) {
        map<char,int>mp,ans; 
        
        for(auto &c : pat) ans[c]++;
        
        int l=0,cnt=0;
        for(int r=0; r<txt.size(); r++){
            mp[txt[r]]++;
            
            if(r-l+1==pat.size()){
                if(mp==ans) cnt++;
                mp[txt[l]]--;
                
                if(mp[txt[l]]==0) mp.erase(txt[l]);
                l++;
            }
        }
        
        return cnt;
    }
};
