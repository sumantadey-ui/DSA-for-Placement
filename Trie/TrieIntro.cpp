#include<iostream>
using namespace std;

class Trienode{
    public:
    char data;
    Trienode* children[26];
    bool isTerminal;

    Trienode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        isTerminal = false;
    }
};

class Trie{

    public:
    Trienode* root;

    void insertUtil(Trienode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
        }

        //Assumung word will be in CAPS
        int index = word[0] - 'A';
        Trienode* child;

        //if present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child= new Trienode(word[0]);
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }


    bool serachUtil(Trienode* root, string word){
        //base case
        if(word.length()==0){
            return root->isTerminal;
        }

        //Assumung word will be in CAPS
        int index = word[0] - 'A';
        Trienode* child;

        //if present
        if(root-> children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //recursion
        return serachUtil(child, word.substr(1));

    }

    bool serchWord(string word){
        return serachUtil(root, word);
    }


};


int main(){

    Trie *t = new Trie();
    t->insertWord("ABCD");
    cout<<"Present or not "<<t->serchWord("ABCD")<<endl;
    return 0;
}