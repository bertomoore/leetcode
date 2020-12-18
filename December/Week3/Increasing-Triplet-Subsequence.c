#include <limits.h>

int increasingTriplet(int* nums, int numsSize) {
    
    if (numsSize < 3) return 0;
    
    int low = INT_MAX, mid = INT_MAX;
    
    for (int i=0; i<numsSize; i++) {
        
        int temp = *(nums+i);
        
        if (mid < temp) return 1;
        
        if (temp < mid && low < temp) mid = temp;
        
        else if (temp < low) low = temp; 
    }
    
    return 0;
}