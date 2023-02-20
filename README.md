Compile:
bazel build ...
or
bazel build src/main --compilation_mode=dbg -s

Debug Flags: --compilation_mode=dbg -s

Run:
bazel-bin/src/main

Run Tests:
bazel test --test_output=all tests/hello_test

https://bazel.build/start/cpp#prerequisites

updating readme...