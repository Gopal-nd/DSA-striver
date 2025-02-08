class TreeNode {
  constructor(x) {
    this.value = x;
    this.left = null;
    this.right = null;
  }
}

function preorder(root) {
  if (!root) {
    return null;
  }
  let stack = [];

  stack.push(root);

  while (stack.length > 0) {
    root = stack.pop();
    console.log(root.value);
    if (root.right !== null) {
      stack.push(root.right);
    }
    if (root.left !== null) {
      stack.push(root.left);
    }
  }
}

let root = new TreeNode(10);
root.left = new TreeNode(11);
root.right = new TreeNode(12);
root.left.left = new TreeNode(43);
root.left.right = new TreeNode(56);

preorder(root);
