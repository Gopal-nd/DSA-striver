// row flip
function flipHorizontal(matrix) {
    return matrix.map(row => row.reverse());
}
let matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];
console.log(flipHorizontal(matrix));

// column flip
function flipVertical(matrix) {
    return matrix.reverse();
}
console.log(flipVertical(matrix));

function flipDiagonal(matrix) {
    let n = matrix.length;
    let transposed = Array.from({length:n},()=>Array(n).fill(0))

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// Example
console.log(flipDiagonal(matrix));




function rotate90(matrix) {
    return flipHorizontal(flipDiagonal(matrix));
}

// Example
console.log(rotate90(matrix));


let twoDarr = Array.from({length:10},()=>Array.from({length:10},()=>Array(5).fill(10)))
console.log(twoDarr)
