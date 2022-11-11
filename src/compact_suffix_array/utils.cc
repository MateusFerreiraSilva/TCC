#include "utils.h"

vector<string> get_suffixes(string text) {
  auto suffixes = vector<string>();
  
  text += "$";

  for (auto i = 0; i < text.size(); i++) {
    auto lenght = text.size() - i; 
    suffixes.push_back(text.substr(i, lenght));
  }

  return suffixes;
}