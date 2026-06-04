class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1=0,cnt1=0,candidate2=0,cnt2=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==candidate1) cnt1++;
            else if(nums[i]==candidate2) cnt2++;
            else if(cnt1==0){
                candidate1=nums[i];
                cnt1++;
            }
            else if(cnt2==0){
                candidate2=nums[i];
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }
        // verify after the pass
         cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
               if(nums[i]==candidate1) cnt1++;
               else if(nums[i]==candidate2) cnt2++;

        }
        vector<int> ans;
        if(cnt1>floor(n/3)) ans.push_back(candidate1);
        if(cnt2>floor(n/3)) ans.push_back(candidate2);

        return ans;
       
        
    }
};
// there can be at most two majority elements in the array cancel triplets : similar to pair in majority element I algorithm 
