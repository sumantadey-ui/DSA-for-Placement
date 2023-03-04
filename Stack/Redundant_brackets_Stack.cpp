// Code Studio 6
/*
bool findRedundantBrackets(string &a){

    stack<char> st;
    for(int i =0 ;i< s.length(); i++){

        char ch = s[i];
        if(ch =='(' || ch =='+' || ch =='-' || ch == '*' || ch=='/'){
            st.push(ch);
        }
        else{
            // ch---')' or  a lower case letter
            if(ch==')'){
                bool isRedundant = true;
                while(st.top != '('){
                    char top = st.top();
                    if(top =='+' || top =='-' || top == '*' || top=='/'){
                        isRedundant == false;
                    }
                    st.pop();
                }
                if(isRedundant==true)
                    return true;
                st.pop();
            }

        }
    }
    return false;
}
*/