var singleNumber = function(nums) {
    const obj = {};
    for(let n of nums) {
        if (!obj[n]) obj[n] = 1;
        else obj[n]++;
    }    
    let ans;
    for (let n in obj) {
         if (obj[n] == 1) {
            ans = n;
            break;
         }      
    }
    return Number(ans);
};