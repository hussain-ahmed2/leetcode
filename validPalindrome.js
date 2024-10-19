var isPalindrome = function(s) {
    const str = s.toUpperCase().split('').filter(letter => {
        if ((letter.charCodeAt(0)>=65 && letter.charCodeAt(0)<=90) || (letter.charCodeAt(0)>=48 && letter.charCodeAt(0)<=57)) return letter;
    }).join('');

    const midPoint = Math.ceil(str.length/2);
    let isPalindrome = true;
    for(let i=0; i<midPoint; i++) {
        if (str[i] !== str[str.length-i-1]) {           
            isPalindrome = false;
            break;
        }
    }
    return isPalindrome;
};

console.log(isPalindrome("0P"));
