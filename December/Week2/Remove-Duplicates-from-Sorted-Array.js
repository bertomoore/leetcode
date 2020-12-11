var removeDuplicates = function(nums) {
    
    let alreadyDuplicate = false;
    let currentNum = -10001;
    let index = 0;

    while (index < nums.length) {

        if (currentNum == nums[index]) {
            alreadyDuplicate && nums.splice(index, 1);
            alreadyDuplicate || index++;
            alreadyDuplicate = true;
        }

        else {
            currentNum = nums[index];
            alreadyDuplicate = false;
            index++
        }
        
    }

    return index

};