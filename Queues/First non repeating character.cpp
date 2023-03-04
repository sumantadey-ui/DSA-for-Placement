// First non-repeating character in a stream-----GFG
/*
class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        unordered_map<char, int> count;
        queue<int> q;
        string ans = "";

        for (int i = 0; i < A.length(); i++)
        {
            char ch = A[i];

            // Increase count
            count[ch]++;

            // push into Q
            q.push(ch);

            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    // repeating char
                    q.pop();
                }
                else
                {
                    // non repeating char
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

*/