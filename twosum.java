class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Outer loop
        for(int i = 0; i < nums.length; i++) {
            
            // Inner loop:
            // 1. Start at i + 1
            // 2. Condition is j < nums.length (NOT <=)
            for(int j = i + 1; j < nums.length; j++) {
                
                if(nums[i] + nums[j] == target) {
                    // Solution found, return it
                    return new int[] {i, j};
                }
            }
        }
        
        // This line is required by the compiler.
        // We throw an exception because the problem guarantees
        // the code will never reach this point.
        throw new IllegalArgumentException("No solution found");
    }
}