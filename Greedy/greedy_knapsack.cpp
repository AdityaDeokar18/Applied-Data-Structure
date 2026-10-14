#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int weight;
    int value;
};

bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;

    return r1 > r2;
}

double fractionalKnapsack(Item items[], int n, int capacity) {

    // Sort according to value/weight ratio
    sort(items, items + n, compare);

    double totalValue = 0;

    for (int i = 0; i < n; i++) {

        // Take complete item
        if (items[i].weight <= capacity) {
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }

        // Take fraction of item
        else {
            double fraction = (double)capacity / items[i].weight;

            totalValue += items[i].value * fraction;

            break;
        }
    }

    return totalValue;
}

int main() {

    Item items[] = {
        {10, 60},
        {20, 100},
        {30, 120}
    };

    int n = 3;
    int capacity = 50;

    double result = fractionalKnapsack(items, n, capacity);

    cout << "Maximum Value = " << result;

    return 0;
}