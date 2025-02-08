class TreeNode {
  constructor(value) {
    this.vlaue = value;
    this.left = null;
    this.right = null;
  }
}

function claDepth(root) {
  if (root === null) return 0;

  let left = claDepth(root.left);
  let right = claDepth(root.right);

  return 1 + Math.max(left, right);
}

let root = new TreeNode(10);
root.left = new TreeNode(12);
root.right = new TreeNode(11);
root.right.left = new TreeNode(78);
root.right.left.right = new TreeNode(44);
root.right.left.right.left = new TreeNode(32);

console.log(claDepth(root));
