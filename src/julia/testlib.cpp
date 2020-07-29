#include <myLib.hpp>
#include "jlcxx/jlcxx.hpp"

using namespace myLib;

JLCXX_MODULE define_julia_module(jlcxx::Module& mod)
{
  mod.add_type<osservazione>("osservazione")
    .constructor<>()
    .method("sum", &osservazione::sum)
    .method("diff", &osservazione::diff);
}
