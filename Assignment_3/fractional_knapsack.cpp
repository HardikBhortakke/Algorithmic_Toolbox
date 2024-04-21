#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here
    vector<double> cost(weights.size());
    for (int i = 0; i < weights.size(); i++) {
        cost[i] = static_cast<double>(values[i]) / weights[i];
    }

    while (capacity > 0 && !cost.empty()) {
        int max_index = max_element(cost.begin(), cost.end()) - cost.begin();
        int taken = min(capacity, weights[max_index]);
        capacity -= taken;
        value += taken * cost[max_index];
        cost.erase(cost.begin() + max_index);
        weights.erase(weights.begin() + max_index);
        values.erase(values.begin() + max_index);
    }
  return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << std::endl;
  return 0;
}
