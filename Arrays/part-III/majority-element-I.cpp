class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore's voting algorithm 
        int majority=nums[0];
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==majority) cnt++;
            else cnt--;
            if(cnt==0) majority=nums[i+1];// whenever the count becomes zero it means that till that index no majority element is found so we need to consider another element as the potential candidate 

        }
        return majority;
        
    }
};
//if you repeatedly pair up different elements and remove them, every removed pair contains at most one occurrence of x. at the end at least one occurence of the majority element is left 
