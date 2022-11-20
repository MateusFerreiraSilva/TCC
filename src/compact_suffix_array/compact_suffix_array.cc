#include "compact_suffix_array.h"

CompactSuffixArray::CompactSuffixArray(string text) {
  this->text = text + "$";
  this->psi = get_psi(this->text);
}

uint CompactSuffixArray::sa_decode(uint x) {
  uint hops_to_end = 0;
  while (psi[x] != (uint) EOF) {
    hops_to_end++;
    x = psi[x];
  }

  return text.size() -1 - hops_to_end;
}