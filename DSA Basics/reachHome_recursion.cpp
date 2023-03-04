#include<iostream>
using namespace std;

void reachHome(int source, int destination){

    cout<<"Source "<<source<<" Destination "<<destination<<endl;

    if(source == destination){
        cout<<"Reached Home"<<endl;
        return;
    }
    source++;
    reachHome(source, destination);

}


int main()
{
    int destination = 10;
    int source = 1;

    reachHome(source,destination);
}