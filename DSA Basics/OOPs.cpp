#include<iostream>
using namespace std;

class Hero{
    //Properties

    private:
        int health;


    public:
        // int health;
        char level;
        char *name;
        static int timeToComplete;

    // Constructor
    Hero(){
        cout<<"Simple Constructor is called..."<<endl;
        name = new char[100];
    }

    //Parameterised constuctor
    Hero(int health){
        // cout<<"this -> "<<this<<endl;
        this -> health = health;
    }
    Hero(int health, char level){
        
        this -> level = level;
        this -> health = health;
    }

    // Copy constractor user build

    // Hero(Hero& temp){
    //     cout<<"Copy constractor user build called--"<<endl;
    //     this -> level =temp.level;
    //     this -> health =temp.health;

    // }

    void print(){
        cout<<"Name--> "<<this->name<<" ";
        cout<<"Health--> "<<this->health<<" ";
        cout<<"Level--> "<<this->level<<" ";
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;

    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        // strcpy(this->name, name);
        this->name=  name;
    }

    static int random(){
        return timeToComplete;
    }


    // Destructor
    ~Hero(){
        cout<<"Destructor is called...."<<endl;
    }
};

int Hero::timeToComplete =5;

int main()
{


    cout<<Hero::random()<<endl;
    
    // cout<<Hero::timeToComplete<<endl;


    // //Not recomended to access like this
    // Hero a;
    // cout<<a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;







    // // Created statically
    // Hero a;

    // // Created dinamically
    // Hero *b= new Hero();
    // delete b;




    // Hero hero1;

    // hero1.setHealth(121);
    // hero1.setLevel('D');
    // char name[8]= "sumanta";
    // hero1.setName(name);

    // hero1.print();

    // // Use default copy constractor
    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0]='G';
    // hero1.print();
    // hero2.print();



    // // Hero s1;
    // // s1.setHealth(20);
    // // s1.setLevel('X');
    // Hero s1(20,'X');
    // s1.print();

    // // Copy constractor is called
    // Hero s2(s1);
    // s2.print();


    // // Object created statically
    // // Hero soom;
    // Hero soom(10);
    // // cout<<"Address of soom "<<&soom<<endl;
    // soom.print();

    // // Object created dinamically
    // Hero *h= new Hero(11);
    // h->print();

    // Hero temp(10,'A');
    // soom.print();


    /*

    // Sataic alllocation--->
    Hero h1;
    h1.setHealth(30);
    h1.setLevel('A');
    cout<<"Level is "<<h1.level<<endl;
    cout<<"Health is "<<h1.getHealth()<<endl;
    // cout<<"Size : "<<sizeof(h1)<<endl;

    // Dynamic allocation--->
    Hero *b= new Hero;
    b->setHealth(70);
    b->setLevel('S');
    cout<<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

    cout<<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;

    */



    // cout<<"H1 health  is : "<<h1.getHealth()<<endl;
    // // h1.health=35;
    // h1.level='A';

    // h1.setHealth(30);
    
    // // cout<<"Health is "<<h1.health<<endl;
    // cout<<"Level is "<<h1.level<<endl;
    // cout<<"Health is "<<h1.getHealth()<<endl;
    // // cout<<"Size : "<<sizeof(h1)<<endl;


}