#pragma once 

#define null     (void*)0
#define nullchar '\0'

// The same thing as size_t 
#ifndef _Ull_DEFINED
    #define _Ull_DEFINED
    #undef Ull
    #ifdef _WIN64
        typedef unsigned __int64 Ull;
    #else
        typedef unsigned int Ull;
    #endif //_WIN64
#endif

// bool is a basic type in C++ and not C
// We could just have used <stdbool.h> but I prefer this as it results in a smaller binary
#ifndef __cplusplus
    typedef unsigned char bool;
    static const bool false = 0;
    static const bool true = 1;
#endif 

// #ifndef __cplusplus
//     #define bool   _Bool
//     #define true   1
//     #define false  0
// #else
    /* Supporting _Bool in C++ is a GCC extension.  */
    // #define _Bool	bool
// #endif // __cplusplus 

