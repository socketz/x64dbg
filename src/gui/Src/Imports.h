#ifndef IMPORTS_H
#define IMPORTS_H

#ifndef _BRIDGEMAIN_H_
#include "bridge/bridgemain.h"
#endif
#ifndef _DBGFUNCTIONS_H
#include "dbg/_dbgfunctions.h"
#endif
#ifndef _DBG_TYPES_H_
#include "dbg_types.h"
#endif

// Convenience overloads
class QString;

void DbgCmdExec(const QString & cmd);
bool DbgCmdExecDirect(const QString & cmd);

#endif // IMPORTS_H
