#include <stdio.h>
#include <limits.h>

int max(int a, int b) { return (a > b) ? a : b; }
// Values (stored in array `v`)
// Weights (stored in array `w`)
// Total number of distinct items `n`
// Knapsack capacity `W`
int knapsack(int v[], int w[], int n, int W)
{
  // base case: Negative capacity
  if (W < 0)
  {
    return INT_MIN;
  }

  // base case: no items left or capacity becomes 0
  if (n < 0 || W == 0)
  {
    return 0;
  }

  // Case 1. Include current item `v[n]` in the knapsack and recur for
  // remaining items `n-1` with decreased capacity `W-w[n]`
  int include = v[n] + knapsack(v, w, n - 1, W - w[n]);

  // Case 2. Exclude current item `v[n]` from the knapsack and recur for
  // remaining items `n-1`
  int exclude = knapsack(v, w, n - 1, W);

  // return maximum value we get by including or excluding the current item
  return max(include, exclude);
}

// 0–1 Knapsack problem
int main()
{

#ifndef ONLINE_JUDGE
  freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/input.txt", "r", stdin);
  freopen("/media/shuvra/New Volume/IIT/Programming/CP/IO/output.txt", "w", stdout);
#endif // ONLINE_JUDGE
  // input: a set of items, each with a weight and a value
  int v[] = {30, 50, 60};
  int w[] = {3, 4, 5};

  // knapsack capacity
  int W = 8;

  // total number of items
  int n = sizeof(v) / sizeof(v[0]);

    printf("Knapsack value is %d", knapsack(v, w, n - 1, W));

    return 0;
}