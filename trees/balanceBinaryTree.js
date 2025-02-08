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
  // if (left === -1 || right === -1) return -1;
  if (Math.abs(left - right) > 1) return -1;

  return 1 + Math.max(left, right);
}

let root = new TreeNode(10);
root.left = new TreeNode(12);
root.right = new TreeNode(11);
root.right.left = new TreeNode(78);
root.left.left = new TreeNode(44);
root.right.right = new TreeNode(32);
root.left.right = new TreeNode(32);
root.left.right.left = new TreeNode(32);

root.left.right.left.right = new TreeNode(32);
root.left.right.left.left = new TreeNode(32);

console.log(claDepth(root) === -1 ? "not Balanced" : "Balanced");
