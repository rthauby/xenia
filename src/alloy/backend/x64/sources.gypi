# Copyright 2013 Ben Vanik. All Rights Reserved.
{
  'sources': [
    'tracing.h',
    'x64_assembler.cc',
    'x64_assembler.h',
    'x64_backend.cc',
    'x64_backend.h',
    'x64_code_cache.cc',
    'x64_code_cache.h',
    'x64_emitter.cc',
    'x64_emitter.h',
    'x64_function.cc',
    'x64_function.h',
    'x64_selector.y',
    'x64_selector_util.h',
    'x64_thunk_emitter.cc',
    'x64_thunk_emitter.h',
    'x64_tracers.cc',
    'x64_tracers.h',
  ],

  'includes': [
    'lir/sources.gypi',
    'optimizer/sources.gypi',
  ],
}
