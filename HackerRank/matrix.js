function flippingMatrix(matrix) {
    let n = matrix.length / 2;
    let maxSum = 0;

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            maxSum += Math.max(
                matrix[i][j],                         // Original position
                matrix[i][2 * n - 1 - j],             // Right-side mirror
                matrix[2 * n - 1 - i][j],             // Bottom mirror
                matrix[2 * n - 1 - i][2 * n - 1 - j]  // Diagonal mirror
            );
      console.log(
    `(${i},${j})`, 
    `(${i},${2 * n - 1 - j})`, 
    `(${2 * n - 1 - i},${j})`, 
    `(${2 * n - 1 - i},${2 * n - 1 - j})`
);

        }
    }

    return maxSum;
}

// Sample Test Cases
console.log(flippingMatrix([
    [112, 42, 83, 119],
    [56, 125, 56, 49],
    [15, 78, 101, 43],
    [62, 98, 114, 108]
])); 

