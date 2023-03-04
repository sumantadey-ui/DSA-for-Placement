// ----------> GFG
/*
class Solution
{
private:
    bool knows(vector<vector<int>> &M, int a, int b, int n)
    {

        if (M[a][b] == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;

        // step1 push all element in stack
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        // step2 get 2 element and compare
        while (s.size() > 1)
        {

            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(M, a, b, n))
            {
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        int ans = s.top();
        // step 3 -- single element in stack is potential celebrity
        // so varify it

        int zeroCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
            {
                zeroCount++;
            }
        }
        // all zeros
        if (zeroCount != n)
            return -1;

        // Col check
        int colCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
            {
                colCount++;
            }
        }
        if (colCount != n - 1)
            return -1;

        return ans;
    }
};
*/