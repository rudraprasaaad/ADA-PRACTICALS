#include <iostream>
#include <climits>
using namespace std;

int minCoins(int coins[], int n, int amount)
{
    int dp[amount + 1];

    for (int i = 1; i <= amount; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= amount; j++)
        {
            if (dp[j - coins[i]] != INT_MAX)
            {
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
            }
        }
    }
    return (dp[amount] != INT_MAX) ? dp[amount] : -1;
}

int main()
{
    int coins[] = {1, 2, 5};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 11;
    int result = minCoins(coins, n, amount);
    if (result != -1)
    {
        cout << "Minimum number of coins needed to make " << amount << " is: " << result << endl;
    }
    else
    {
        cout << "It's not possible to make change for " << amount << "." << endl;
    }

    return 0;
}
