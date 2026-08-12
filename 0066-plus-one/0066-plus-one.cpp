class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;
        for(int i=n-1;i>=0;i--){
            int sum = digits[i]+ carry;
            digits[i]=sum % 10;
            carry = sum/10;
            if (carry==0) break;
        }
        if (carry!=0){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna