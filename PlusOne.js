var plusOne = function(digits) {
    let res = digits.reduce((acc, n, i) => acc + (n * Math.pow(10, digits.length -1 -i)), 0);
    res++;
    return res.toString().split('').map(el => Number(el));
};
