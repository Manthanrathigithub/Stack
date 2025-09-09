class Solution{
public:
    int longestSubarray(vector<int> &a, long long k){
        int left=0;
        int right=0;
        int n=a.size();
        int sum=a[0];
        int maxlen=0;
        while(right<n){
            while(sum > k && left<=right){
                sum=sum - a[left];
                left++;
            }
            if(sum==k){
                maxlen=max(maxlen,right-left+1);
                
            }
            right++;
            sum=sum+a[right];
        }
            return maxlen;
    }

};
