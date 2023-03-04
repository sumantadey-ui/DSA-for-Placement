#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;



int main()
{
    //creation
    unordered_map<string,int> m;


    //insertion
    //1
    pair<string,int>p=make_pair("sumanta", 3);
    m.insert(p);

    //2
    pair<string,int>p2("is", 2);
    m.insert(p2);

    //3
    m["a"] = 3;
    m["a"] = 5;

    //search
    cout<<m["sumanta"]<<endl;
    cout<<m.at("a")<<endl;

    cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check present
    cout<<m.count("hii")<<endl;
    cout<<m.count("sumanta")<<endl;

    //erase
    m.erase("is");
    cout<<m.size()<<endl;

    for(auto i : m){
        cout<<i.first <<" "<<i.second<<endl;
    }

    //iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

}