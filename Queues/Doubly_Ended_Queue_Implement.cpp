/*
Code studio


class Deque{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Deque(int n){
        size = n;
        arr = new int[size];
        front =-1;
        rear = -1;
    }

    bool pushfront(int x){
        // check full or not
        if( isFull() ){
            return false;
        }
        else if( isEmpty()  ){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
          
            front = size-1;
        }
        else{
            front --;
        }
        arr[front] =x;
        return true;
    }

    bool pushRear(int x){
        if( isFull() ){
            // cout<<"Queue is full.."<<endl;
            return false;
        }
        else if( isEmpty() )//for first element push
        {
            front = rear = 0;
        }
        else if(rear==size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        // push element
        arr[rear] = x;
        return true;
    }
    int popFront(){
        if( isEmpty() ){
            // cout<<"Queue is empty.."<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear)// for single element
        {
            front = rear =-1;
        }
        else if(front == size-1){// front is at the end position
            front =0; // to mentain cyclic nature
        }
        else{//normal case
            front++;
        }
        return true;
    }
    int popRear(){
        if(isEmpty()){
            // cout<<"Queue is empty.."<<endl;
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear)// for single element
        {
            front = rear =-1;
        }

        else if(rear==0){// front is at the end position
            rear = size-1;; // to mentain cyclic nature
        }

        else{
            rear --;
        }
        return true;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if((front == 0 && rear = size -1) || (front !=0 &&rear == (front-1)%(size-1))){
            return true;
        }
        return false;
    }
};

*/