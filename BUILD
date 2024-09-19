
cc_library(
    name="my_lib",
    srcs=["reverse.cpp"],
    hdrs=["reverse.h"],
)

cc_test(
    name="tests",
    srcs=["reverse_test.cpp"],
    deps=[
        "//:my_lib",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ]
)
