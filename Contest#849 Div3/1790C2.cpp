#include <iostream>
#include <unordered_map>
using namespace std;

const int N = 105;

int t, n;
int a[N][N]; // to store the sequences
unordered_map<int, int> cnt; // to store the occurrences of each element

int main() {
  cin >> t;
  while (t--) {
    cin >> n;
    cnt.clear();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n - 1; j++) {
        cin >> a[i][j];
        cnt[a[i][j]]++;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 1; j <= n; j++) {
        if (cnt[j] == n - 1) { // missing element in this sequence
          cout << j << " ";
          cnt[j] = -1; // mark as used
          break;
        }
      }
    }
    cout << endl;
  }
  return 0;
}
