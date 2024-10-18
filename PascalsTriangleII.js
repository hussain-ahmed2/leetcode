var getRow = function(rowIndex) {
    rowIndex++;
    const first = [[1]];
    const second = [[1],[1, 1]];

    if (rowIndex == 1) return [1];
    else if(rowIndex == 2) return [1, 1];

    let result = [...second];
    for (let i=2; i<rowIndex; i++) {
        const arr = [];
        for(let j=0; j<=i; j++){
            if (j==0 || j==i) arr.push(1);
            else arr.push(result[i-1][j-1]+result[i-1][j]); 
        }
        result = [...result, arr];
    }
    
    return result[rowIndex-1];
};


