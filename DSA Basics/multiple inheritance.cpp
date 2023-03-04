#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking...";
    }
};
class Human{
    public:
    string color;

    public:
    void speak1(){
        cout<<"Speaking11...";
    }

};

//Multiple inheritance

class Hybrid: public animal, public Human{

};


int main()
{
    Hybrid obj1;
    obj1.speak();
    obj1.speak1();
        

    
    return 0;
}