var majorityElement = function(nums) {
    const obj = {};
    for(let n of nums) {
        if (!obj[n]) obj[n] = 1;
        else obj[n]++;
    }    
    let ans = 0;
    let maj = 0;
    for (let n in obj) {
         if (obj[n] > ans) {
            ans = obj[n];
            maj = n;
         }      
    }
    return Number(maj);
};