var sortedSquares = function(nums) {
    let index = nums.findIndex(num => num >= 0);
    
    if (index <= 0) {
        let result = nums.map(num => num**2);
        
        return index === 0 ? result : result.reverse();
    }
    
    let rIndex = index - 1;
    let diff = 0;
    let result = [];
    
    while (rIndex > -1 && index < nums.length) {
        
        diff = nums[rIndex] + nums[index];
        
        if (diff > 0)
            result.push(nums[rIndex--]**2);
            
        else if (diff < 0)
            result.push(nums[index++]**2);
            
        else {
            result.push(nums[rIndex--]**2);
            result.push(nums[index++]**2);
        }
    
    }
    
    while (rIndex > -1)
        result.push(nums[rIndex--]**2);
    
    while (index < nums.length)
        result.push(nums[index++]**2);
    
    return result;
};