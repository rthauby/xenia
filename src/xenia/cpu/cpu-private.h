/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_CPU_PRIVATE_H_
#define XENIA_CPU_PRIVATE_H_

#include <gflags/gflags.h>


DECLARE_bool(trace_instructions);
DECLARE_bool(trace_user_calls);
DECLARE_bool(trace_kernel_calls);

DECLARE_string(load_module_map);

DECLARE_string(dump_path);
DECLARE_bool(dump_module_bitcode);
DECLARE_bool(dump_module_map);

DECLARE_bool(optimize_ir_modules);
DECLARE_bool(optimize_ir_functions);


#endif  // XENIA_CPU_PRIVATE_H_