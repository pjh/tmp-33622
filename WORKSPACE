load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_grpc_grpc",
    strip_prefix = "grpc-tags-v1.56.2",
    urls = [
        "https://github.com/grpc/grpc/archive/tags/v1.56.2.tar.gz",
    ],
)

#http_archive(
#    name = "com_github_grpc_grpc",
#    strip_prefix = "grpc-tags-v1.53.0",
#    urls = [
#        "https://github.com/grpc/grpc/archive/tags/v1.53.0.tar.gz",
#    ],
#)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
