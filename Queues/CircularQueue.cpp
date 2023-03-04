/*

Code Studio

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value){
        if((front == 0 && rear = size -1) || (rear == (front-1)%(size-1))){
            // cout<<"Queue is full.."<<endl;
            return false;
        }
        else if(front == -1)//for first element push
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
        arr[rear] = value;
        return true;
    }

    int dequeue(){
        if(front ==-1){
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
        else{
            front++;
        }
        return true;
    }
};

*/