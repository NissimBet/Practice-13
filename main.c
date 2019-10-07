#include <Windows.h>
#include <stdio.h>

HINSTANCE dllCode;

typedef void (DLL_FUNCTION)(void);
DLL_FUNCTION* ptrFuncMessage = 0;

int main() {
	if (dllCode = LoadLibrary("P13DLL.dll")) {
		if (ptrFuncMessage = (DLL_FUNCTION*)GetProcAddress(dllCode, "tryUnion")) {
			(*ptrFuncMessage)();
		}
		else {
			printf("ERROR. Runtime not found\n");
		}
	}
	else {
		printf("ERROR. Library not found");
	}
	FreeLibrary(dllCode);
	getchar();
}