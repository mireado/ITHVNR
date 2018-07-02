#pragma once

// except.h
// 9/17/2013 jichi

#define ITH_RAISE  (*(int*)0 = 0) // raise C000005, for debugging only

# define ITH_TRY    __try
# define ITH_EXCEPT __except(EXCEPTION_EXECUTE_HANDLER)
# define ITH_WITH_SEH(...) ITH_TRY { __VA_ARGS__; } ITH_EXCEPT {}

// EOF
