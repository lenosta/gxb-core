#include <gxblib/gxb.hpp>

using namespace gxblib;
using namespace graphene;

class skeleton : public graphene::contract {
  public:
      using contract::contract;

      /// @abi action
      void hi(account_name user) {
          print("Hello, ", user);
      }

      /// @abi action
      void bye(account_name user) {
          for (int i =0; i < 2; ++i) {
              print("Bye, ", user);
          }
      }
};

GXB_ABI(skeleton, (subbalance)(addbalance)(hi)(bye))
