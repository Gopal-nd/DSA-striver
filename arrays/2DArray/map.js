function countingSort(arr) {
    // Step 1: Create a frequency array of size 100 initialized with zeros
    let frequency = new Array(100).fill(0);

    // Step 2: Count occurrences of each number in arr
    for (let num of arr) {
        frequency[num]++;  // Increment count at index num
    }

    // Step 3: Return the frequency array
    return frequency;
}

// Example Usage
const arr = [1, 1, 3, 2, 1];
console.log(countingSort(arr));

