// .............. Code studio ............ 


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
        int index = word[0] - 'a';
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


    void pringSuggestion(Trienode* curr, vector<string> &temp, string prefix){
        if(curr->isTerminal){
            temp.push_back(prefix);
        }
        for(char ch='a';ch<='z'; ch++){
            Trienode* next = curr->children[ch-'a'];

            if(next != NULL){
                prefix.push_back(ch);
                pringSuggestion(next, temp, prefix);
                prefix.pop_back();
            }
        }
    }



    vector<vector<string> getSuggestion(string str){
        Trienode* prev = root;
        vector<vector<string>> output;
        string prefix ="";

        for(int i=0; i<str.length();i++){
            char lastCh = str[i];

            prefix.push_back(lastCh);

            // check for lastCh
            Trienode* curr = prev->children[lastCh - 'a'];

            // if not fouund
            if(curr == NULL){
                break;
            }

            // if found
            vector<string> temp;
            pringSuggestion(curr, temp, prefix);

            output.push_back(temp);
            temp.clear();
            prev = curr;
        }
        return output;
    }

};



vector<vector<string> phoneDirectory(vector<string> &contactList, string &queryStr){

    // Creation of trie
    Trie *t = new Trie();

    //insert alll contect in trie
    for(int i = 0; i< contactList.size();i++){
        string str = contactList[i];
        t->insertWord(str);
    }

    // return ans
    return t->getSuggestion(queryStr);

}