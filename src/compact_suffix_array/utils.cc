#include "utils.h"

class Comparator {
  private:
    string text;
  public:
    Comparator(string text) {
      this->text = text;
    }

    bool operator()(uint a, uint b) {
      auto lenghtA = text.size() - a;
      auto lenghtB = text.size() - b;

      return text.substr(a, lenghtA) < text.substr(b, lenghtB);
    }
};

vector<uint> get_psi(string text) {
  auto suffixes = vector<uint>();

  for (size_t i = 0; i < text.size(); i++) {
    suffixes.push_back(i);
  }

  sort(suffixes.begin(), suffixes.end(), Comparator(text));

  vector<uint> inverted_index_suffixes(suffixes.size());
  vector<uint> psi(suffixes.size());
  for (size_t i = 0; i < suffixes.size(); i++) {
    inverted_index_suffixes[suffixes[i]] = i;
  }

  for (size_t i = 0; i < suffixes.size(); i++) {
    if (suffixes[i] + 1 < (uint) suffixes.size()) {
      psi[i] = inverted_index_suffixes[suffixes[i] + 1];
    } else {
      psi[i] = EOF;
    }
  }

  return psi;
}