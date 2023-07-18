load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hi",
    srcs = ["hi.cc"],
    defines = ["BAZEL_BUILD"],
    deps = [
        "@com_github_grpc_grpc//:grpc++",
    ],
)
