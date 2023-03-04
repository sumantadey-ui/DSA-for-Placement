#include<iostream>
using namespace std;

class Human{

    public:
        int height;
        int weight;
        int age;
    public:
    int getAge(){
        return this-> age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male:public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping...."<<endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main()
{


    Male m1;
    cout<<m1.getHeight()<<endl;



    // Male obj1;
    // cout<<obj1.age<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;

    // cout<<obj1.color<<endl;

    // obj1.setWeight(55);
    // cout<<obj1.weight<<endl;
    // obj1.sleep();

    return 0;
}