class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

// value + (maxl + maxr)

function depth(root, result) {
  if (root === null) return 0;

  let leftDepth = depth(root.left, result)
  let rightDepth = depth(root.right, result)

  result.diameter = Math.max(result.diameter, leftDepth + rightDepth + root.value);

  return Math.max(leftDepth, rightDepth) + root.value;
}

const root = new Node(1);
root.left = new Node(2);
root.right = new Node(3);
root.left.left = new Node(42);
root.left.right = new Node(5);
root.left.right.right = new Node(6);
root.left.right.right.right = new Node(1100);

let result = { diameter: -Infinity };
depth(root, result);
console.log("maxPathSUm:", result.diameter);
