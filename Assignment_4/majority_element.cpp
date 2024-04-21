#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
  // if (left == right) return -1;
  // if (left + 1 == right) return a[left];
  //write your code here
  if (left == right) { return a[left]; }

	if (left + 1 == right) {
		if (a[left] != a[right]) return -1;
		else
			return a[left];
	}

	int mid = left + (right - left) / 2;
	int count_x = 0, count_y = 0;

	long x = get_majority_element(a, left, mid);
	long y = get_majority_element(a, mid + 1, right);

	for (int i = left; i <= right; i++) {
		if (x == a.at(i)) {
			count_x++;
		} else if (y == a.at(i)) {
			count_y++;
		}
	}

	int n = right - left + 1;

	if (count_x > count_y and count_x > n / 2) return x;
	if (count_x < count_y and count_y > n / 2) return y;

	return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  cout << (get_majority_element(a, 0, a.size() - 1) != -1) << '\n';
}
