class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
       int mixedxorr=0,n=nums.size();
       for(int i=1;i<=n;i++){
           mixedxorr=mixedxorr^nums[i-1]^i;
       }
       // keep only the last set bit to classify 
       mixedxorr=(mixedxorr ^(mixedxorr-1))&mixedxorr;
       // apply the concept of bucket
       int xorr1=0,xorr2=0;
       for(int i=0;i<n;i++){
        if(nums[i] & mixedxorr) xorr1=xorr1^nums[i];
        else xorr2=xorr2^nums[i];
       }
       for(int i=1;i<=n;i++){
        if(i & mixedxorr) xorr1=xorr1^i;
        else xorr2=xorr2^i;
       }
      for(int i=0;i<n;i++){
        if(nums[i]==xorr1) return {xorr1,xorr2};
        else if(nums[i]==xorr2) return {xorr2,xorr1};
      }
    }
};
