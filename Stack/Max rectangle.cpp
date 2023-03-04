//----------> GFG
/*
class Solution
{
private:
    vector<int> nextSmallerElement(int *arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            // ans --- stack -top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(int *arr, int n)
    {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; n < n; i++)
        {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            // ans --- stack -top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    int largestRectangleArea(int *heights, int n)
    {
        // int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights, n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);

        int area = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int length = heights[i];

            if (next == -1)
            {
                next[i] == n;
            }
            int breath = next[i] - prev[i] - 1;

            int newArea = length * breath;

            area = max(area, newArea);
        }
        return area;
    }

public:
    int maxArea(int M[MAX][MAX], int n, int m)
    {

        // Compute area for first row
        int area = largestRectangleArea(M[0], m);

        // for remainning row
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // update row by adding prev row valur
                if (M[i][j] != 0)
                {
                    M[i][j] = M[i][j] + M[i - 1][j];
                }
                else
                {
                    M[i][j] = 0;
                }
            }
            // entire row now updated
            int newArea = largestRectangleArea(M[i], m);
            area = max(area, newArea );
        }
        return area;
    }
};
*/