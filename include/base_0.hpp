#ifndef BASE_0_H
#define BASE_0_H

#ifdef X_BUILD_STATIC
    #define BASE_0_API
#else
    #ifdef BASE_0_Export
    #define BASE_0_API __declspec(dllexport)
    #else
    #define BASE_0_API __declspec(dllimport)
    #endif    
#endif

BASE_0_API int BASE0_add(int a,int b);

#endif
