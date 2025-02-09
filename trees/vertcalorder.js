                            
// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

class Solution {
  
    findVertical(root) {
   
        const nodes = new Map();
        
    
        const todo = [];
 
        todo.push([root, [0, 0]]);
        
        while (todo.length > 0) {
        
            const [temp, [x, y]] = todo.shift();
            
          
            if (!nodes.has(x)) {
                nodes.set(x, new Map());
                console.log(nodes)
            }
            if (!nodes.get(x).has(y)) {
                nodes.get(x).set(y, new Set());
                console.log(nodes)
            }
            nodes.get(x).get(y).add(temp.data);
            
     
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
        
      
        const ans = [];
        for (const [key, value] of nodes) {
            const col = [];
            for (const [subKey, subValue] of value) {
         
                col.push(...subValue);
            }
         
            ans.push(col);
        }
        return ans;
    }
}


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
root.left.right = new Node(5);

root.right = new Node(3);
root.right.right = new Node(6);


const solution = new Solution();

// Get the Vertical traversal
const verticalTraversal = solution.findVertical(root);

// Print the result
console.log("Vertical Traversal: ");
printResult(verticalTraversal);

                            
                        
