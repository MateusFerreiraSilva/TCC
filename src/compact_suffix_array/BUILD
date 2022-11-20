load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "compact_suffix_array",
    srcs = ["compact_suffix_array.cc", "utils.cc"],
    hdrs = ["compact_suffix_array.h", "utils.h"],
    visibility = [
        "//src:__pkg__",
        "//tests/compact_suffix_array_test:__pkg__"
    ],
)