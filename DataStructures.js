class Node {
    constructor(data, next = null) {
      this.data = data;
      this.next = next;
    }
  }
  
  
  
  
  
  
  
  
  class Node {
    constructor(data, next=null) {
      this.value = data;
      this.next = next;
    }
  }
  
  class Queues {
    constructor() {
      this.first = 0;
      this.last = 0;
      this.size = 0;
    }
  
    //Adds element to the end of the list. Similar to Array.push()
    add(data) {
      const newNode = new Node(data);
      if (!this.first) {
        this.first = newNode;
      } else {
        //`this.tail.next` has the same reference as `this.head`'s very last item aka the last item of the list. So modifying `this.tail.next` will also modifies `this.head`'s last item.
        this.last.next = newNode;
      }
      this.last = newNode;
      return ++this.size;
    }
  

    remove() {
      if (this.size === 0) return null;
      if (this.size === 1) this.last = null;
      const cptrFirst = this.first;
      this.first = this.first.next;
      this.size--;
      cptrFirst.next = null; //removing the connection, not necessary but important.
      return cptrFirst;
    }
  }
  

  const queues = new Queues();
  queues.add("Hello");
  queues.add("World");
  queues.add("!");