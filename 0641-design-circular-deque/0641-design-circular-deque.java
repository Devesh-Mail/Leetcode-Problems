class Node{
    int data;
    Node next;
    Node(){
        data=0;
        next=null;
    }   
    Node(int data){
        this.data=data;
        next=null;
    }
}
class MyCircularDeque {
    int size=0;
    int currSize=0;
    Node head=new Node();
    public MyCircularDeque(int k) {
        size=k;
    }
    
    public boolean insertFront(int value) {
        if(currSize==size)
            return false;
        Node temp=new Node(value);
        if(currSize==0){
            head=temp;
        }else{
            temp.next=head;
            head=temp;
        }
        currSize++;
        return true;
    }
    
    public boolean insertLast(int value) {
        if(currSize==size)
            return false;
        if(currSize==0){
            head=new Node(value);
        }else{
            Node temp=new Node(value);
            Node t=head;
            while(t.next!=null){
                t=t.next;
            }
            t.next=temp;
        }
        currSize++;
        return true;
    }
    
    public boolean deleteFront() {
        if(currSize==0)
            return false;
        head=head.next;
        currSize--;
        return true;
    }
    
    public boolean deleteLast() {
        if(currSize==0)
            return false;
        Node t=head;
        if(currSize<2)
            head=head.next;
        else{
            while(t.next.next!=null){
                t=t.next;
            }
            t.next=null;
        }
        currSize--;
        return true;
    }
    
    public int getFront() {
        if(currSize==0)
            return -1;
        return head.data;
    }

    public int getRear() {
        if(currSize==0)
            return -1;
        Node t=head;
        while(t.next!=null)
            t=t.next;
        return t.data;
    }
    
    public boolean isEmpty() {
        if(currSize==0)
            return true;
        else
            return false;
    }
    
    public boolean isFull() {
        if(currSize==size)
            return true;
        return false;
    }
}

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque obj = new MyCircularDeque(k);
 * boolean param_1 = obj.insertFront(value);
 * boolean param_2 = obj.insertLast(value);
 * boolean param_3 = obj.deleteFront();
 * boolean param_4 = obj.deleteLast();
 * int param_5 = obj.getFront();
 * int param_6 = obj.getRear();
 * boolean param_7 = obj.isEmpty();
 * boolean param_8 = obj.isFull();
 */