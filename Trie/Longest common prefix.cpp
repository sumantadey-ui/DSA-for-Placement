// ............Codesstudio 16........

// approach 2 using Trie 

class TrieNode{
    public:
    char data;
    TrieNode* childeren[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26;i++){
            childeren[i] = NULL;
        }
        childCount = 0;
        isTerminal= false;
    }

};
class Trie{
    public:
    TrieNode* root;

    Trie(char ch){
        root = new TrieNode(ch);
    }

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isTerminal = true;
        }

        //Assumung word will be in CAPS
        int index = word[0] - 'a';
        TrieNode* child;

        //if present
        if(root-> childeren[index] != NULL){
            child = root->childeren[index];
        }
        else{
            //absent
            child= new TrieNode(word[0]);
            root->childCount++;
            root->childeren[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    void lcp(string str, int &ans){

        for(int i = 0; i< str.length(); i++){
            char ch = str[i];
            if(root->childCount == 1){
                ans.push_back(ch);
                // age baad jai
                int index = ch - 'a';
                root = root->childeren[index];
            }
            else{
                break;
            }
            if(root->isTerminal){
                break;
            }
        }

    }
};



string longestCommonPrefix(vector<string> &arr, int n){
    Trie *t = new Trie("\0");
    // insert all string into trie
    for(int i = 0; i < n; i++){
        t->insertWord(arr[i]);
    }

    string first = arr[0];
    string ans ="";
    t->lcp(first, ans);
    return ans;
}










/*
// approach 1 ans

string longestCommonPrefix(vector<string> &arr, int n){
    string ans="";
    // for travarse all char in first
    for(int i=0; i<arr[0].length();i++){
        char ch = arr[0][i];

        bool match = false;

        //for comparing ch with rest of the strings
        for(int j = 1; j<n;j++){
            //not match
            if(arr[j].size() < i || ch != arr[j][i]){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}

*/