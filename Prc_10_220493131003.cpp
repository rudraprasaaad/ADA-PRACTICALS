#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Item
{
    int weight;
    int value;
    double value_per_weight;

    Item(int w, int v) : weight(w), value(v), value_per_weight(static_cast<double>(v) / w) {}
};
bool compareItems(const Item &item1, const Item &item2)
{
    return item1.value_per_weight > item2.value_per_weight;
}

double fractionalKnapsack(vector<Item> &items, int capacity)
{
    sort(items.begin(), items.end(), compareItems);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (const Item &item : items)
    {
        if (currentWeight + item.weight <= capacity)
        {
            // Take the whole item
            currentWeight += item.weight;
            totalValue += item.value;
        }
        else
        {
            double fraction = static_cast<double>(capacity - currentWeight) / item.weight;
            totalValue += fraction * item.value;
            break;
        }
    }

    return totalValue;
}
int main()
{
    vector<Item> items = {{10, 60}, {20, 100}, {30, 120}};
    int capacity = 50;

    double maxValue = fractionalKnapsack(items, capacity);

    cout << "Maximum value that can be obtained = " << maxValue << endl;

    return 0;
}
