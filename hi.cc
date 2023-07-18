#include <grpcpp/grpcpp.h>

int main() {
    auto chan = grpc::CreateChannel("localhost:3333", grpc::InsecureChannelCredentials());
    return 0;
}
