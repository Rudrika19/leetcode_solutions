class Solution {
    public int[] concatWithReverse(int[] nums) {
        int n = nums.length;

        int[] ans = new int[2 * n];

        for (int i = 0; i < n; i++) {
            // First half: original array
            ans[i] = nums[i];

            // Second half: reversed array
            ans[i + n] = nums[n - 1 - i];
        }

        return ans;
    }
}