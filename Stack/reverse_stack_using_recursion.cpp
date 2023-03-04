// Code studio 47
/*
void insertAtBottom(stack<int> &s, int num)
{
    // Base case
    if (s.empty())
    {
        s.push(num);
    }

    int num = s.top();
    s.pop();

    // Recursive call
    solve(s, num);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{

    // Base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top;
    stack.pop();

    // Recursion cal
    reverseStack(stack);

    insertAtBottom(stack, num);
}
*/