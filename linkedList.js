class Node{
  constructor(value) {
      this.value = value;
      this.next = null;
  }
}

class LinkedList{
  constructor(){
    this.head = null;
    this.size = 0;
    this.tail = null;
  }
  append(value){
    this.size++;
    if(this.head==null){
      let node = new Node(value);
      this.head = node;
      this.tail = node;
      return;
    }
    let temp = this.head;
    while(temp.next!=null||temp.next!=undefined){
      temp = temp.next;
    }
    let node = new Node(value);
    temp.next = node;
    this.tail = node;
  }
  prepend(value){
      this.size++;
      if(this.head==null){
        let node = new Node(value);
        this.head = node;
        this.tail = node;
        return;
      }
      let node = new Node(value);
      node.next = this.head;
      this.head = node;
  }
  at(index){
    if(index>this.size-1||index<0){
      console.log('out of bound');
    }
    else{
      let node = this.head;
      let c = 0;
      while(node!=null&&c!=index){
        node = node.next;
        c++;
      }
      return node;
    }
  }
  pop(){
    if(this.head==null){
      return;
    }
    if(this.head.next==null){
      this.head = null;
      this.tail = null;
      this.size = 0;
      return;
    }
    let temp = this.head;
    while(temp.next.next!=null){
      temp = temp.next; 
    }
    this.tail = temp;
    this.tail.next=null;
    this.size--;
  }
  toString(){
    let x = '';
    let node = this.head;
    while(node!=null){
      x+='( '+ node.value +' ) -> ';
      node = node.next;
    }
    x+= 'null';
    return x;
  }
  insertAt(value, index){
    if(index>this.size||index<0){
      console.log('out of bound');
    }
    else{
      if(index==0){
        this.prepend(value);
        return;
      }
      if(index==this.size){
        this.append(value);
        return;
      }
      let temp = this.head;
      for(let i=0; i<index-1; i++){
        temp =temp.next;
      }
      console.log(temp.value);
      let node = new Node(value);
      let temp2 = temp.next;
      temp.next = node;
      node.next = temp2;
      this.size++;
    }
  }
  removeAt(index){
    if(index>=this.size||index<0){
      console.log('out of bound');
      return;
    }
    if(this.size==0){
      console.log('Empty list');
      return;
    }
    else{
      if(index==0){
        let node = this.head.next;
        this.head.next=null;
        this.head = node;
        this.size--;
        return;
      }
      if(index==this.size-1){
        this.pop();
        return;
      }
      let temp = this.head;
      for(let i=0; i<index-1; i++){
        temp =temp.next;
      }
      let temp2 = temp.next.next;
      temp.next = temp2;
      this.size--;
      
    }
  }
}


const list = new LinkedList();

list.append("dog");
list.append("parrot");
list.append("hamster");
list.pop();
list.append("snake");
list.append("turtle");
list.removeAt(3);
console.log(list);
list.prepend("cat");
console.log(list);



