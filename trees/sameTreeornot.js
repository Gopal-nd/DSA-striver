class node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

//Depth first search traversals

// pre order traversel (root -> left -> right)
function IsIdentical(root, root2) {
  if (root === null && root2 === null) {
    return true;
  }
  if (root === null || root2 === null) {
    return false;
  }

  if (root2.value !== root.value) {
    return false;
  }
  return IsIdentical(root.left, root2.left) &&
    IsIdentical(root.right, root2.right);
}

const root = new node(1);
root.left = new node(2);
root.right = new node(3);
root.left.left = new node(4);
root.left.right = new node(9);

const root2 = new node(1);
root2.left = new node(2);
root2.right = new node(3);
root2.left.left = new node(4);
root2.left.right = new node(5);

// dfs
console.log("\n Are there same  ");
console.log(IsIdentical(root, root2));
