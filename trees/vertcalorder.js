/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var verticalOrder = function(root) {
    if (!root) return [];

    // Map to store column index and corresponding nodes
    const columnMap = new Map();
    const queue = [[root, 0]]; // [Node, Column Index]

    let minCol = 0, maxCol = 0;

    while (queue.length > 0) {
        const [node, col] = queue.shift(); // Get node and column index

        if (!columnMap.has(col)) {
            columnMap.set(col, []);
        }
        columnMap.get(col).push(node.val);

        minCol = Math.min(minCol, col);
        maxCol = Math.max(maxCol, col);

        if (node.left) queue.push([node.left, col - 1]);  // Left child → Col - 1
        if (node.right) queue.push([node.right, col + 1]); // Right child → Col + 1
    }

    // Collect results in sorted column order
    const result = [];
    for (let i = minCol; i <= maxCol; i++) {
        result.push(columnMap.get(i));
    }

    return result;
};

