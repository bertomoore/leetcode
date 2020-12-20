class Solution {

    public int[][] generateMatrix(int n) {

        int count = 0, m = 0;

        int[][] result = new int[n][n];

        if (n % 2 == 1) result[n/2][n/2] = n * n;

        while (m < n) count = generateLayer(result, count, m++, --n);

        return result;
    }

    private int generateLayer(int[][] matrix, int count, int min, int max) {

        int i;

        for (i = min; i < max; i++) matrix[min][i] = ++count;

        for (i = min; i < max; i++) matrix[i][max] = ++count;

        for (i = max; i > min; i--) matrix[max][i] = ++count;
        
        for (i = max; i > min; i--) matrix[i][min] = ++count;

        return count;
    }
    
}