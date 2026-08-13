class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = -1;
        int missing = 1;
        for(int i=1; i<nums.size(); i++){
            if (nums[i] == nums[i-1]){
                duplicate = nums[i];
            }
            if (nums[i]> nums[i-1]+1)
                missing = nums[i-1]+1;
        }
        if (nums[0]!=1){
            missing=1;
    
        }
        if(nums.back() != nums.size()){
            missing = nums.size();
        }
        return {duplicate, missing};
        }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna