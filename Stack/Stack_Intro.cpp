#include<iostream>
#include<stack>
using namespace std;

class Stack{

    //Properties
    public:
        int *arr;
        int top; 
        int size;
    //Behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    void peak(){
        if( top>=0 ){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};


int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(55);

    cout<<st.peak()<<endl;
    st.pop();
    cout<<st.peak()<<endl;
    
    st.pop();
    cout<<st.peak()<<endl;
    
    if(st.isEmpty()){
        cout<<"Stack is empty now..."<<endl;
    }
    else{
        cout<<"Stack is not empty..."<<endl;
    }

    /*
    // creation of stack 
    stack<int> s;

    //Push operation
    s.push(2);
    s.push(3);

    cout<<"Size of stack is "<<s.size()<<endl;
    //Pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty now..."<<endl;
    }
    else{
        cout<<"Stack is not empty..."<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;
    */

    return 0;
}