// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

/**
 * Returns the right view of the binary tree.
 * The right view consists of the last node at each level when traversed from left to right.
 * @param {Node} root - The root node of the binary tree.
 * @return {number[]} - An array of node values representing the right view.
 */
function rightView(root) {
    if (!root) return [];
    
    const result = [];
    const queue = [root]; // BFS queue
    
    while (queue.length > 0) {
        const levelSize = queue.length;
        
        for (let i = 0; i < levelSize; i++) {
            const node = queue.shift();
            
            // If this is the last node in the current level, add it to the result.
            if (i === levelSize - 1) {
                result.push(node.data);
            }
            
            // Enqueue child nodes for the next level.
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
    }
    
    return result;
}

/**
 * Returns the left view of the binary tree.
 * The left view consists of the first node at each level when traversed from left to right.
 * @param {Node} root - The root node of the binary tree.
 * @return {number[]} - An array of node values representing the left view.
 */
function leftView(root) {
    if (!root) return [];
    
    const result = [];
    const queue = [root]; // BFS queue
    
    while (queue.length > 0) {
        const levelSize = queue.length;
        
        for (let i = 0; i < levelSize; i++) {
            const node = queue.shift();
            
            // If this is the first node in the current level, add it to the result.
            if (i === 0) {
                result.push(node.data);
            }
            
            // Enqueue child nodes for the next level.
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
    }
    
    return result;
}

// --- Example Usage ---

// Constructing a sample binary tree:
//         1
//        / \
//       2   3
//      / \   \
//     4   5   6
//        /
//       7

const root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.left = new Node(4);
root.left.right = new Node(5);
root.right.right = new Node(6);
root.left.right.left = new Node(7);

console.log("Right View:", rightView(root)); // Expected Output: [1, 3, 6, 7]
console.log("Left View:", leftView(root));   // Expected Output: [1, 2, 4, 7]

