/*

Code Studio

class Queue{
    int *arr;
    int size;
    int qfront;
    int rear;

    public:
    Queue(){
        size = 10000;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full..."<<endl;
        }
        else{
            arr[rear]= data;
            rear ++;
        }
    }
    int dequeue(int data){
        if(rear == qfront){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront ++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
    bool isEmpty(){
        if(rear == qfront){
            return true;
        }
        else
            return false;
    }
};
*/