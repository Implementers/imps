// imp_dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "imp_dll.h"


// This is an example of an exported variable
IMP_DLL_API int nimp_dll=0;

// This is an example of an exported function.
IMP_DLL_API int fnimp_dll(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see imp_dll.h for the class definition
Cimp_dll::Cimp_dll()
{
    return;
}
