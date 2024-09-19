# Google Test Example

This project is an example of using google test.

## File Contents

* MODULE.bazel - bazel module dependencies (e.g. google test).
* BUILD - baze build file for project.
* reverse.cpp - example library source file.
* reverse.h - example library header file.
* reverse_test.cpp - unit tests for reverse.cpp.

## Building and Running 

### Building unit tests
```
bazel build //:tests
```

### Running unit tests
```
bazel test //:tests --test_output=all
```

### Reference

* [GoogleTest User Guide](https://google.github.io/googletest/)
* [Bazel](https://docs.bazel.build/versions/4.2.2/bazel-overview.html)