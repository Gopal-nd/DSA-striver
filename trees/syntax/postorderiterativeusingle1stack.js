class TreeNode {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

// Iterative Postorder Traversal (Left → Right → Root) Using a Single Stack
function iterativePostorder(root) {
  if (!root) return;

  let stack = [];
  let lastVisited = null;
  let current = root;

  while (current !== null || stack.length > 0) {
    // Go as left as possible
    while (current !== null) {
      stack.push(current);
      current = current.left;
    }

    let peekNode = stack[stack.length - 1];

    // If right child exists and was not visited, go to the right child
    if (peekNode.right !== null && peekNode.right !== lastVisited) {
      current = peekNode.right;
    } else {
      // Otherwise, process this node and mark it as visited
      console.log(peekNode.value);
      lastVisited = stack.pop();
    }
  }
}

// Sample Tree Structure
let root = new TreeNode(10);
root.left = new TreeNode(5);
root.right = new TreeNode(15);
root.left.left = new TreeNode(2);
root.left.right = new TreeNode(7);
root.right.left = new TreeNode(12);
root.right.right = new TreeNode(17);

// Run Traversal
console.log("Postorder Traversal:");
iterativePostorder(root);
