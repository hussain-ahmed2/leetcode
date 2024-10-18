var generate = function(numRows) {
    const first = [[1]];
    const second = [[1],[1, 1]];

    if (numRows == 1) return first;
    else if(numRows == 2) return second;

    let result = [...second];
    
    for (let i=2; i<numRows; i++) {
        const arr = [];
        for(let j=0; j<=i; j++){
            if (j==0 || j==i) arr.push(1);
            else arr.push(result[i-1][j-1]+result[i-1][j]);
        }
        result = [...result, arr];
    }
    return result;
};

