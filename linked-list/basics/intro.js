class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  //insert at the end
  append(value) {
    let newNode = new Node(value);
    if (!this.head) {
      this.head = newNode;
      return;
    }
    let current = this.head;
    while (current.next) {
      current = current.next;
    }
    current.next = newNode;
  }

  //  insert at the begining
  prepend(value) {
    let newNode = new Node(value);
    newNode.next = this.head;
    this.head = newNode;
  }

  //delete a Node
  delete(value) {
    if (!this.head) return;
    if (this.head.value === value) {
      this.head = this.head.next;
      return;
    }

    let current = this.head;
    while (current.next && current.next.value !== value) {
      current = current.next;
    }
    if (current.next) {
      current.next = current.next.next;
    }
  }

  // print linked list
  print() {
    let current = this.head;
    while (current) {
      process.stdout.write(current.value + " ->");
      current = current.next;
    }
    console.log("NULL");
  }
}

let list = new LinkedList();
list.append(10);
list.append(20);
list.prepend(6);
list.print();
list.delete(10);
list.print();

let namee = process.stdin.on("what is your name?", (data) => {
  console.log(data);
  process.exit();
});
