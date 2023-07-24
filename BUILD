load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "hi",
    srcs = ["hi.cc"],
    defines = ["BAZEL_BUILD"],
    deps = [
        "//fruit:fruit_service_cc_grpc_proto",
        "//fruit:fruit_service_cc_proto",
        "@com_github_grpc_grpc//:grpc++",
    ],
)
