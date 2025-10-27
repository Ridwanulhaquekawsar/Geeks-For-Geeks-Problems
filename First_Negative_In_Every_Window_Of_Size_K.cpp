class Solution {
    public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int l=0,r=0; vector<int>ans;
        queue<int>q;
    
        while(r<arr.size()){
            if(arr[r]<0) q.push(arr[r]);
            
            if(r-l+1==k){
                if(!q.empty()) ans.push_back(q.front());
                else ans.push_back(0);
                
                if(arr[l++]<0) q.pop();
            }
            
            r++;
        }
        
        return ans;
    }
};
