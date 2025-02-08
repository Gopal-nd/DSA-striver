                            
// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

class Solution {
    // Function to perform zigzag level
    // order traversal of a binary tree
    ZigZagLevelOrder(root) {
        // Array to store the
        // result of zigzag traversal
        const result = [];

        // Check if the root is null,
        // return an empty result
        if (!root) {
            return result;
        }

        // Queue to perform
        // level order traversal
        const nodesQueue = [];
        nodesQueue.push(root);

        // Flag to determine the direction of
        // traversal (left to right or right to left)
        let leftToRight = true;

        // Continue traversal until
        // the queue is empty
        while (nodesQueue.length > 0) {
            // Get the number of nodes
            // at the current level
            const size = nodesQueue.length;

            // Array to store the values
            // of nodes at the current level
            const row = Array(size);

            // Traverse nodes at 
            // the current level
            for (let i = 0; i < size; i++) {
                // Get the front node
                // from the queue
                const node = nodesQueue.shift();

                // Determine the index to insert the node's
                // value based on the traversal direction
                const index = leftToRight ? i : (size - 1 - i);

                // Insert the node's value at
                // the determined index
                row[index] = node.data;

                // Enqueue the left and right
                // children if they exist
                if (node.left) {
                    nodesQueue.push(node.left);
                }
                if (node.right) {
                    nodesQueue.push(node.right);
                }
            }

            // Switch the traversal
            // direction for the next level
            leftToRight = !leftToRight;

            // Add the current level's
            // values to the result array
            result.push(row);
        }

        // Return the final result of
        // zigzag level order traversal
        return result;
    }
}

// Helper function to print the result
function printResult(result) {
    for (const row of result) {
        for (const val of row) {
            process.stdout.write(val + " ");
        }
        console.log();
    }
}

// Creating a sample binary tree
const root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.left = new Node(4);
root.left.right = new Node(5);
root.right.left = new Node(6);
root.right.right = new Node(7);

const solution = new Solution();

// Get the zigzag level order traversal
const result = solution.ZigZagLevelOrder(root);

// Print the result
printResult(result);

                            
                        
