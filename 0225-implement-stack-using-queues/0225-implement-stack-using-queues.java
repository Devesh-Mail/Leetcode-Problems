class MyStack {
    Deque<Integer> que=new ArrayDeque<>();
    public MyStack() {
        
    }
    
    public void push(int x) {
        que.addLast(x);
    }
    
    public int pop() {
        int x=que.getLast();
        que.removeLast();
        return x;
    }
    
    public int top() {
        return que.getLast();
    }
    
    public boolean empty() {
        if(que.isEmpty())
            return true;
        else
            return false;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */