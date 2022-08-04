#ifndef TENSORFLOW_JS_OPS_TS_OP_GEN_H_
#define TENSORFLOW_JS_OPS_TS_OP_GEN_H_

#include "tensorflow/core/framework/op_def.pb.h"
#include "tensorflow/core/framework/op_gen_lib.h"
#include "tensorflow/core/platform/types.h"

namespace tensorflow {

// Generated code is written to the file ts_filename:
void WriteTSOps(const OpList& ops, const ApiDefMap& api_def_map,
                const string& ts_filename);

}  // namespace tensorflow

#endif  // TENSORFLOW_JS_OPS_TS_OP_GEN_H_
