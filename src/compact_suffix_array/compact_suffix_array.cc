#include "compact_suffix_array.h"

CompactSuffixArray::CompactSuffixArray(string text) {
  auto suffixes = get_suffixes(text);

  for (auto suffix : suffixes) {
    cout << suffix << endl;
  }
}