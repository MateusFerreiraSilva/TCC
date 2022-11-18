#include "compact_suffix_array.h"

CompactSuffixArray::CompactSuffixArray(string text) {
  this->psi = get_psi(text + "$");
  cout << "test" << endl;
}