class TreeNode {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

// Iterative Preorder Traversal (Root → Left → Right)
function iterativePreorder(root) {
  if (!root) return;
  let stack = [root];

  while (stack.length > 0) {
    let node = stack.pop();
    console.log(node.value); // Visit the node

    if (node.right) stack.push(node.right);
    if (node.left) stack.push(node.left);
  }
}

// Iterative Inorder Traversal (Left → Root → Right)
function iterativeInorder(root) {
  if (root === null) return;

  let stack = [];
  let current = root;

  while (current !== null || stack.length > 0) {
    // Reach the leftmost node
    while (current !== null) {
      stack.push(current);
      current = current.left;
    }

    // Process the node
    current = stack.pop();
    console.log(current.value);

    // Visit the right subtree
    current = current.right;
  }
}

// Iterative Postorder Traversal (Left → Right → Root)
function iterativePostorder(root) {
  if (root === null) return;

  let stack1 = [root];
  let stack2 = [];

  while (stack1.length > 0) {
    let node = stack1.pop();
    stack2.push(node); // Push to second stack

    if (node.left) stack1.push(node.left);
    if (node.right) stack1.push(node.right);
  }

  // Pop from stack2 to get postorder
  while (stack2.length > 0) {
    console.log(stack2.pop().value);
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

// Run Traversals
console.log("Preorder Traversal:");
iterativePreorder(root);

console.log("\nInorder Traversal:");
iterativeInorder(root);

console.log("\nPostorder Traversal:");
iterativePostorder(root);
