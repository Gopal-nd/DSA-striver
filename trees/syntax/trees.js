class node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

//Depth first search traversals

// pre order traversel (root -> left -> right)
function preorder(root) {
  if (root) {
    console.log(root.value);
    preorder(root.left);
    preorder(root.right);
  }
}

//inorder traversal (left -> root -> rigth)

function inorder(root) {
  if (root) {
    inorder(root.left);
    console.log(root.value);
    inorder(root.right);
  }
}

// post order traversal (left ->  right -> root)
function postorder(root) {
  if (root) {
    postorder(root.right);
    postorder(root.left);
    console.log(root.value);
  }
}

// Breadth first Search (level order traversal)
// making it a FIFO (First In, First Out) traversal method.

function levelOrder(root) {
  if (!root) return;

  const queue = [];
  queue.push(root)

  while (queue.length > 0) {
    const node = queue.shift();
    if (node) {
      // Check if node is not null/undefined
      console.log(node.value); // Visit the node

      // Enqueue left child if it exists
      if (node.left) queue.push(node.left);

      // Enqueue right child if it exists
      if (node.right) queue.push(node.right);
    }
  }
}

const root = new node(1);
root.left = new node(2);
root.right = new node(3);
root.left.left = new node(4);
root.left.right = new node(5);

// dfs
console.log("\n preorder  ");
preorder(root);

console.log("\n inorder  ");
inorder(root);

console.log("\n postorder  ");
postorder(root);

//bfs
console.log("\n level order  ");
levelOrder(root);
