class TreeNode {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function depth(root, result) {
  if (root === null) return 0;

  let leftDepth = depth(root.left, result);
  let rightDepth = depth(root.right, result);

  result.diameter = Math.max(result.diameter, leftDepth + rightDepth);
  return 1 + Math.max(leftDepth, rightDepth);
}

// Build the tree
let root = new TreeNode(10);
root.left = new TreeNode(12);
root.right = new TreeNode(11);
root.left.left = new TreeNode(44);
root.left.right = new TreeNode(32);
root.right.left = new TreeNode(78);
root.right.right = new TreeNode(32);

let result = { diameter: 0 };
depth(root, result);
console.log("Diameter:", result.diameter);
