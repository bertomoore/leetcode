public class Solution {

    public int MaxCoins(int[] nums) {
        
        int currentValues, balloons, n = nums.Length;

        if (n == 0) return 0;

        int[,] dp = new int[n, n];

        for (int l=n-1; l >=0; l--) {

            for (int r=l; r<n; r++) {

                dp[l, r] = -1;

                for (int i=l; i<=r; i++) {

                    currentValues =
                        (l+1 > i ? 0 : dp[l, i-1]) +
                        (i+1 > r ? 0 : dp[i+1, r]);

                    balloons =
                        (l==0 ? 1 : nums[l-1]) *
                        nums[i] *
                        (r==n-1 ? 1 : nums[r+1]);


                    dp[l, r] = Math.Max(dp[l, r], currentValues + balloons);

                }

            }

        }

        return dp[0,n-1];
    }
}