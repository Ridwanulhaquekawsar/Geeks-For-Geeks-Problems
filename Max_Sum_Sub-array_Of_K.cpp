class Solution {
    public:
    int sum=0,ans=0,l=0,r=0;
    
    int maxSubarraySum(vector<int>& arr, int k) {
        while(r<arr.size()){
            sum+=arr[r];
            
            if(r-l+1==k){
                ans=max(ans,sum);
                sum-=arr[l++];
            }
            
            r++;
        }
        
        return sum;
    }
};
