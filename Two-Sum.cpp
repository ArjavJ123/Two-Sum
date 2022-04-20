class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> anst;
        vector<int> temp = nums;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i< nums.size(); i++) {
            for(int j=0; j<i ; j++) {
                if(target - nums[i] == nums[j]) {
                    anst.push_back(nums[i]);
                    anst.push_back(nums[j]);
                }
            }
        }
        for(int i=0; i<temp.size(); i++) {
            if(temp[i] == anst[0] || temp[i] == anst[1]) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
