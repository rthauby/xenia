/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef ALLOY_HIR_INSTR_H_
#define ALLOY_HIR_INSTR_H_

#include <alloy/core.h>
#include <alloy/hir/opcodes.h>
#include <alloy/hir/value.h>


namespace alloy { namespace runtime { class FunctionInfo; } }


namespace alloy {
namespace hir {

class Block;
class Label;

class Instr {
public:
  Block*    block;
  Instr*    next;
  Instr*    prev;

  const OpcodeInfo* opcode;
  uint16_t  flags;
  uint32_t  ordinal;

  typedef union {
    runtime::FunctionInfo* symbol_info;
    Label*    label;
    Value*    value;
    uint64_t  offset;
  } Op;

  Value*  dest;
  Op      src1;
  Op      src2;
  Op      src3;

  Value::Use* src1_use;
  Value::Use* src2_use;
  Value::Use* src3_use;

  void set_src1(Value* value);
  void set_src2(Value* value);
  void set_src3(Value* value);

  void MoveBefore(Instr* other);
  void Replace(const OpcodeInfo* opcode, uint16_t flags);
  void Remove();
};


}  // namespace hir
}  // namespace alloy


#endif  // ALLOY_HIR_INSTR_H_
