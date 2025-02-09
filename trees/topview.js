const { ReceiptText } = require("lucide-react");

// Node structure for the binary tree
class Node {
    constructor(val) {
        this.data = val;
        this.left = null;
        this.right = null;
    }
}

/**
 * Computes the top view of a binary tree.
 * The top view is the set of nodes visible when the tree is viewed from above.
 * For each vertical column (horizontal distance), the node at the smallest level (depth) is visible.
 *
 * @param {Node} root - The root node of the binary tree.
 * @return {number[]} - An array of node values representing the top view, from leftmost to rightmost.
 */
function topView(root) {
  



if(!root) return[]

  const map = new Map()

  const queue = [];

  queue.push([root,0,0])

  while (queue.length >0){

    const [node, hd, level] = queue.shift()

    if(!map.has(hd) || level < map.get(hd).level){
      map.set(hd,{level:level,value:node.data})
    }

    if(node.left){
      queue.push([node.left, hd-1, level+1])
    }
    if(node.right){
      queue.push([node.right,hd +1,level+1])
    }
  }

  const sortedHds = Array.from(map.keys()).sort((a,b)=>a-b);

  const result = sortedHds.map(hd => map.get(hd).value);

  return result;
  
















}

// Helper function to print the top view
function printTopView(result) {
    console.log("Top View:", result.join(" "));
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

// Get and print the top view of the binary tree
const result = topView(root);
printTopView(result);

