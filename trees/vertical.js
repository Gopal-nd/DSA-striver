// queue having Q(node , v, level)


                            
// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

class Solution {
    // Function to perform vertical order traversal
    // and return a 2D array of node values
    findVertical(root) {
        // Map to store nodes based on
        // vertical and level information
        const nodes = new Map();
        
        // Queue for BFS traversal, each
        // element is an array containing node
        // and its vertical and level information
        const todo = [];
        
        // Push the root node with initial vertical
        // and level values (0, 0)
        todo.push([root, [0, 0]]);
        
        // BFS traversal
        while (todo.length > 0) {
            // Retrieve the node and its vertical
            // and level information from
            // the front of the queue
            const [temp, [x, y]] = todo.shift();
            
            // Insert the node value into the
            // corresponding vertical and level
            // in the map
            if (!nodes.has(x)) {
                nodes.set(x, new Map());
            }
            if (!nodes.get(x).has(y)) {
                nodes.get(x).set(y, new Set());
            }
            nodes.get(x).get(y).add(temp.data);
            
            // Process left child
            if (temp.left) {
                todo.push([
                    temp.left,
                    [
                        // Move left in
                        // terms of vertical
                        x - 1,
                        // Move down in
                        // terms of level
                        y + 1
                    ]
                ]);
            }
            
            // Process right child
            if (temp.right) {
                todo.push([
                    temp.right,
                    [
                        // Move right in
                        // terms of vertical
                        x + 1,
                        // Move down in
                        // terms of level
                        y + 1
                    ]
                ]);
            }
        }
        
        // Prepare the final result array
        // by combining values from the map
        const ans = [];
        for (const [key, value] of nodes) {
            const col = [];
            for (const [subKey, subValue] of value) {
                // Insert node values
                // into the column array
                col.push(...subValue);
            }
            // Add the column array
            // to the final result
            ans.push(col);
        }
        return ans;
    }
}

// Helper function to
// print the result
function printResult(result) {
    for (const level of result) {
        console.log(level.join(" "));
    } 
    console.log("");
}

// Creating a sample binary tree
const root = new Node(1);
root.left = new Node(2);
root.left.left = new Node(4);
root.left.right = new Node(10);
root.left.left.right = new Node(5);
root.left.left.right.right = new Node(6);
root.right = new Node(3);
root.right.right = new Node(10);
root.right.left = new Node(9);

const solution = new Solution();

// Get the Vertical traversal
const verticalTraversal = solution.findVertical(root);

// Print the result
console.log("Vertical Traversal: ");
printResult(verticalTraversal);

                            

