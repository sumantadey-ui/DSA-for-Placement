// Code Studio 12
/*
class TwoStack{

    int *arr;
    int top1;
    int top2;
    int size;

    public:
        //Initialize two stack
        Twostack(int s){
            this->size = s;
            top1 = -1; 
            top2 = s;
            arr = new int[s];
        }

        //Push in stack 1
        void push1(int num){
            // atleast a empty list is present
            if(top2- top1 > 1){
                top1++;
                arr[top1] = num;
            }
            // else{
            //     cout<<"Stack overflow"<<endl;
            // }
        }

        //Push in stack 2
        void push2(int num){
            // atleast a empty list is present
            if(top2- top1 > 1){
                top2--;
                arr[top2] = num;
            }
            // else{
            //     cout<<"Stack overflow"<<endl;
            // }
        }

        // pop from stack 1 and return pop element
        int pop1(){
            if(top1>=0){
                int ans = arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }

        // pop from stack 1 and return pop element
        int pop2(){
            if(top2<size){
                int ans = arr[top2];
                top2++;
                return ans;
            }
            else{
                return -1;
            }
        }


};
*/