#ifndef COMPACT_SUFFIX_ARRAY_H_
#define COMPACT_SUFFIX_ARRAY_H_

#include <ctime>
#include <string>
#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

class CompactSuffixArray {
    private:
        string text;
        vector<uint> psi;
    public:
        CompactSuffixArray(string text);
        uint sa_decode(uint x);
};

#endif