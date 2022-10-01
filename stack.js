class Stack {
    constructor() {
      this.first = null;
      this.last = null;
      this.size = 0;
    }
    add(data) {
      const newNode = new Node(data);
      if (!this.first) {
        this.last = newNode;
        this.first = newNode;
      } else {
        const cptrFirst = this.first;
        this.first = newNode;
        newNode.next = cptrFirst;
      }
      return ++this.size;
    }
  
    remove() {
      if (!this.first) return null;
      const cptrFirst = this.first;
      this.first = this.first.next;
      this.size--;
      cptrFirst.next = null; //removing the connection, not necessary but important
      return cptrFirst.data;
    }
  }

  const stack = new Stack();
  stack.add("Hello");
  stack.add("World");
  stack.add("!");
  stack.remove()
  