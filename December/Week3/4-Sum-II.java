import java.util.HashMap;

class Solution {
    public int fourSumCount(int[] A, int[] B, int[] C, int[] D) {
        
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        
        for (int a : A) {
            for (int b : B) {
                int temp = a + b;
                map.put(temp, map.getOrDefault(temp, 0) + 1);
            }
        }
        
        int result = 0;
        
        for (int c : C) {
            for (int d : D) {
                int temp = -(c + d);
                result += map.getOrDefault(temp, 0);
            }
        }
        
        return result;
        
    }
}