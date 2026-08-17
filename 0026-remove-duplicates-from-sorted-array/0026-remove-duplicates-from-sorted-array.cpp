class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k+=1;
            }
        }
        return k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna