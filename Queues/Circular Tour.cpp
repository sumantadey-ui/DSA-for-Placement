// ............GFG.........
/*
class Solution
{

    int tour(petrolPamp P[], int n)
    {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for (int i = 0; i < n; i++)
        {
            balance = P[i].petrol - P[i].balance;
            if (balance < 0)
            {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }
        if (deficit + balance >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

*/