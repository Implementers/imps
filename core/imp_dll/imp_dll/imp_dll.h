// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the IMP_DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// IMP_DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef IMP_DLL_EXPORTS
#define IMP_DLL_API __declspec(dllexport)
#else
#define IMP_DLL_API __declspec(dllimport)
#endif

// This class is exported from the imp_dll.dll
class IMP_DLL_API Cimp_dll {
public:
	Cimp_dll(void);
	// TODO: add your methods here.
};

extern IMP_DLL_API int nimp_dll;

IMP_DLL_API int fnimp_dll(void);
