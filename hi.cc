#include <grpcpp/grpcpp.h>

#include "fruit/fruit_service.grpc.pb.h"
#include "fruit/fruit_service.pb.h"

int main() {
  auto chan =
      grpc::CreateChannel("localhost:3333", grpc::InsecureChannelCredentials());

  std::unique_ptr<fruit::FruitService::Stub> client =
      fruit::FruitService::NewStub(chan);
  grpc::ClientContext context;
  fruit::GetBananaRequest req;
  fruit::GetBananaResponse resp;

  req.set_name("hi");
  client->GetBanana(&context, req, &resp);

  return 0;
}
