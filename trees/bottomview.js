// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

/**
 * Computes the bottom view of a binary tree.
 * The bottom view is the set of nodes visible when the tree is viewed from below.
 * For each vertical column (horizontal distance), the node with the greatest level is visible.
 *
 * @param {Node} root - The root node of the binary tree.
 * @return {number[]} - An array of node values representing the bottom view, from leftmost to rightmost.
 */
function bottomView(root) {
    if (!root) return [];

    // Map to store the bottom-most node for each horizontal distance.
    // Key: horizontal distance (hd)
    // Value: object { level: <depth>, value: <node.data> }
    const hdMap = new Map();

    // Queue for BFS: each element is [node, hd, level]
    const queue = [];
    queue.push([root, 0, 0]); // Start with the root at horizontal distance 0 and level 0

    while (queue.length > 0) {
        // Dequeue the next element
        const [node, hd, level] = queue.shift();

        // For bottom view, update the mapping if this node is at a deeper (or equal) level
        // than the node already recorded for the same horizontal distance.
        if (!hdMap.has(hd) || level >= hdMap.get(hd).level) {
            hdMap.set(hd, { level: level, value: node.data });
        }

        // Enqueue left child with hd - 1 and level + 1
        if (node.left) {
            queue.push([node.left, hd - 1, level + 1]);
        }
        // Enqueue right child with hd + 1 and level + 1
        if (node.right) {
            queue.push([node.right, hd + 1, level + 1]);
        }
    }

    // Sort the horizontal distances (keys) and build the result array.
    const sortedHDs = Array.from(hdMap.keys()).sort((a, b) => a - b);
    const result = sortedHDs.map(hd => hdMap.get(hd).value);

    return result;
}

// Helper function to print the bottom view
function printBottomView(result) {
    console.log("Bottom View:", result.join(" "));
}

// Example: Creating a sample binary tree
//
//         1
//        / \
//       2   3
//        \
//         4
//          \
//           5
//            \
//             6
//
const root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.right = new Node(4);
root.left.right.right = new Node(5);
root.left.right.right.right = new Node(6);

// Get and print the bottom view of the binary tree
const result = bottomView(root);
printBottomView(result);

