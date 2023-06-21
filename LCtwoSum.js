var nums = [2,3,4];
var target = 5;
console.log('nums =',nums);
console.log('target =',target);

var twoSum = function(nums, target) {
let map = new Map();
    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        if (map.has(complement)) {
            return [map.get(complement), i];
        }
        map.set(nums[i], i);
    }
}
let result = twoSum(nums, target);
console.log(result);