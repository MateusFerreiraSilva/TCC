#include <gtest/gtest.h>
#include "src/compact_suffix_array/compact_suffix_array.h"
#include "src/compact_suffix_array/utils.h"

const auto text = string("happypuppy");

TEST(CompactSuffixArrayTests, GetPSI) {
  const vector<uint> expected_psi_values {
    (uint) EOF, 4, 1, 6, 7, 8, 9, 10, 3, 0, 5
  };

  auto psi = get_psi(text + "$");

  EXPECT_EQ(typeid(psi), typeid(vector<uint>));
  EXPECT_EQ(psi, expected_psi_values);
}

TEST(CompactSuffixArrayTests, SaDecode) {
  auto csa = new CompactSuffixArray(text);
  
  const vector<uint> expected_sa_values {10, 1, 0, 7, 2, 5, 8, 3, 6, 9, 4};

  for (size_t i = 0; i < expected_sa_values.size(); i++) {
    auto sa_value = csa->sa_decode(i);
    EXPECT_EQ(sa_value, expected_sa_values[i]);
  }
}