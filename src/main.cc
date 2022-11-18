#include "compact_suffix_array/compact_suffix_array.h"

int main() {
  string text = "happypuppy";

  CompactSuffixArray csa(text);

  uint x;
  do {
    cout << "Enter a suffix to get: ";
    cin >> x;
    
    if (x >= text.size()) {
      cout << "Invalid Input" << endl;
      continue;
    }
    
    auto sa_idx = csa.sa_decode(x);

    cout << "SA: " << sa_idx << endl;
    cout << text.substr(sa_idx, text.size() - sa_idx) << endl << endl;
  } while (true);

  return 0;
}