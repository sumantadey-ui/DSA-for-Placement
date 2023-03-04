#include<iostream>
using namespace std;

class A{

    public:
    void func(){
        cout<<"Inside A..."<<endl;
    }


};
class B: public A{
    public:
    void func(){
        cout<<"Inside B..."<<endl;
    }
};
class C: public A, public B{
    public:
    
};


int main()
{
    C obj1;

    obj1.B::func();

    return 0;
}