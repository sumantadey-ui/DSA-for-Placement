#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Create  aqueue
    queue<int> q;
    q.push(5);
    cout<<"Front of Queue is "<<q.front()<<endl;
    q.push(11);
    cout<<"Front of Queue is "<<q.front()<<endl;
    q.push(15);
    cout<<"Front of Queue is "<<q.front()<<endl;
    q.push(19);
    cout<<"Front of Queue is "<<q.front()<<endl;

    cout<<"Size of queue is : "<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<"Size of queue is : "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty..."<<endl;
    }
    else
        cout<<"Queue is not empty..."<<endl;

    return 0;
}