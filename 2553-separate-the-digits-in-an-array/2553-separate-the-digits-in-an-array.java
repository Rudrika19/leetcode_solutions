class Solution {
    public int[] separateDigits(int[] nums) {
        
        // First calculate total number of digits
        int totalDigits = 0;

        for (int num : nums) {
            totalDigits += String.valueOf(num).length();
        }

        int[] ans = new int[totalDigits];
        int index = 0;

        // Extract each digit
        for (int num : nums) {
            String str = String.valueOf(num);

            for (int i = 0; i < str.length(); i++) {
                ans[index] = str.charAt(i) - '0';
                index++;
            }
        }

        return ans;
    }
}