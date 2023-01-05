#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip, tax, totalCost;
    tip = meal_cost*((tip_percent*1.00)/100);
    tax = meal_cost*((tax_percent*1.00)/100);
    totalCost = meal_cost + tip + tax;
    cout << round(totalCost) << endl;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);
    return 0;
}


