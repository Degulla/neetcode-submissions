class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int first=nums[0];
        int cnt=1;
        int largest=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==first+1){
                cnt++;
                first=nums[i];
            }
            else if(nums[i]==first){
                continue;
            }
            else{
                cnt=1;
                first=nums[i];
            }
            largest=max(largest,cnt);;
        }
        return largest;
        
    }
};
