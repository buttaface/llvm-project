//===-- CommandObjectHealthcheck.h ------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_SOURCE_COMMANDS_COMMANDOBJECTHEALTHCHECK_H
#define LLDB_SOURCE_COMMANDS_COMMANDOBJECTHEALTHCHECK_H

#include "lldb/Interpreter/CommandObject.h"

namespace lldb_private {

class CommandObjectHealthcheck : public CommandObjectParsed {
public:
  CommandObjectHealthcheck(CommandInterpreter &interpreter);

  ~CommandObjectHealthcheck() override = default;

protected:
  bool DoExecute(Args &args, CommandReturnObject &result) override;
};

} // namespace lldb_private

#endif // LLDB_SOURCE_COMMANDS_COMMANDOBJECTHEALTHCHECK_H
