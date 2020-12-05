class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int i = 0;

        while (n > 0 && i < flowerbed.length-1) {

            if (flowerbed[i] == 1) i += 2;

            else if (flowerbed[i+1] == 1) i += 3;

            else {
              i += 2;
              n--;
            }

        }

        if (i == flowerbed.length-1 && flowerbed[i] == 0) n--;

        return n <= 0;
    }
}