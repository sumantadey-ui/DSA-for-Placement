#include<iostream>
using namespace std;

class animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking...";
    }
};

class Dog: public animal{

};


int main()
{
    Dog d1;
    d1.speak();
    cout<<d1.age<<endl;
    
    return 0;
}