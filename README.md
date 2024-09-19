# Google Test Example

This project is an example of using google test.

## File Contents

* MODULE.bazel - bazel module dependencies (e.g. google test).
* BUILD - baze build file for project.
* reverse.cpp - example library source file.
* reverse.h - example library header file.
* reverse_test.cpp - unit tests for reverse.cpp.

## Install Bazel
Bazel is required to build and run tests in this example.
I run everything in a vscode dev container on mac with ARM processor.  Following are the steps I followed to install bazel inside the dev container (*NOTE: your steps might be different depending on hw platform and container type*).

```
wget https://github.com/bazelbuild/bazel/releases/latest/download/bazel-7.3.1-linux-arm64
chmod +x bazel-7.3.1-linux-arm64 
sudo mv bazel-7.3.1-linux-arm64 /usr/local/bin/bazel
ln -s /usr/local/bin/bazel /usr/bin/bazel
bazel version
```

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

