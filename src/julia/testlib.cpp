#include <myLib.hpp>
#include "jlcxx/jlcxx.hpp"

using namespace myLib;

JLCXX_MODULE define_types_module(jlcxx::Module& types)
{
  types.add_type<osservazione>("osservazione")
    .constructor<>()
    .method("sum", &osservazione::sum)
    .method("diff", &osservazione::diff);
}
