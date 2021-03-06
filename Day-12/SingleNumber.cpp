/*class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans=ans^nums[i];
        return ans;
    }
};*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)
            if(nums[i]!=nums[i-1])
                return nums[i];
        return nums[nums.size()-1];
    }
};
