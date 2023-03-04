// -------------GFG----------->
/*
queue<int> modifyQueue(queue<int> q, int k)
{

    // step 1: pop first k element from Q and put into stack
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int element = q.top();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }

    // step 3: fetch first(n-k) element from Q and push back

    int t = q.size() - k;

    while (t--)
    {
        int val = q.front();
        q.pop();
        q.push(element);
    }
    return q;
}
*/