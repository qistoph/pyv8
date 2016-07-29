#pragma once

#undef COMPILER
#undef TRUE
#undef FALSE

#include "src/v8.h"

#include "src/bootstrapper.h"
#include "src/snapshot/natives.h"
#include "src/base/platform/platform.h"
#include "src/ast/scopes.h"

#include "src/debug/debug.h"

//#include "src/serialize.h"
#include "src/ic/stub-cache.h"
#include "src/heap/heap.h"

#include "src/parsing/parser.h"
#include "src/compiler.h"
#include "src/parsing/scanner.h"

#include "src/api.h"

namespace v8i = v8::internal;
