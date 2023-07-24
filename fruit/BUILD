load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")

package(
    default_visibility = ["//visibility:public"],
)

proto_library(
    name = "fruit_service_proto",
    srcs = ["fruit_service.proto"],
)

cc_proto_library(
    name = "fruit_service_cc_proto",
    deps = [":fruit_service_proto"],
)

cc_grpc_library(
    name = "fruit_service_cc_grpc_proto",
    srcs = [":fruit_service_proto"],
    grpc_only = True,
    deps = [":fruit_service_cc_proto"],
)
