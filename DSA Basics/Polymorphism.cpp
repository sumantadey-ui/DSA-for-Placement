#include<iostream>
using namespace std;

// Polymorphysm
// ---->Compile time Polymorphism
// ---->Run time Polymorphism


//Compile time Polymorphism
// ---->1)Function Overloading
// ---->2)Operator overloading

//------->Function Overloading
class A{
    public:
    void sayHellow(){
        cout<<"Hello Sumanta..."<<endl;
    }
    int sayHellow(char name){
        cout<<"Hello..."<<name<<endl;
        return 1;
    }
    void sayHellow(string name, int n){
        cout<<"Hello..."<<name<<endl;
    }
};

// ------>Operator overloading
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout<<"The output is "<<value1-value2<<endl;
        cout<<"The output is "<<value2-value1<<endl;

        cout<<"This is a man..."<<endl;
    }

    void operator() (){
        cout<<"I am a bracket..."<<this->a<<endl;
    }
};

//Run time Polymorphism
//------->Method Overloading

class Animal{
    public:
    void speak(){
        cout<<"Speaking..."<<endl;
    }
};


class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking..."<<endl;
    }
};





int main()
{
    Dog obj1;
    obj1.speak();









    // B obj1, obj2;
    // obj1.a=4;
    // obj2.a=9;
    // obj1+obj2;
    // obj1();
    

    
    // A obj1;
    // obj1.sayHellow();
}