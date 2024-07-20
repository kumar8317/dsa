class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> previousDataStore(amount + 1, -1);
        for (int targetAmount = 0; targetAmount <= amount; targetAmount++)
        {
            if (targetAmount % coins[0] == 0)
                previousDataStore[targetAmount] = targetAmount / coins[0];
            else
                previousDataStore[targetAmount] = 1e9;
        }
        for (int index = 1; index < n; index++)
        {
            vector<int> currentDataStore(amount + 1, -1);
            for (int targetAmount = 0; targetAmount <= amount; targetAmount++)
            {
                int notPick = 0 + previousDataStore[targetAmount];
                int pick = 1e9;
                if (coins[index] <= targetAmount)
                    pick = 1 + currentDataStore[targetAmount - coins[index]];
                currentDataStore[targetAmount] = min(pick, notPick);
            }
            previousDataStore = currentDataStore;
        }
        int minimumCoins = previousDataStore[amount];
        return minimumCoins > amount ? -1 : minimumCoins;
    }
};