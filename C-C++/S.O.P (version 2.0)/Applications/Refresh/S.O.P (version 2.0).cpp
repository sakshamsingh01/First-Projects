#include <iostream>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	STARTUPINFO startInfo = {0};
    PROCESS_INFORMATION processInfo = {0};
    BOOL bScucces = CreateProcess(TEXT("C:\\S.O.P (version 2.0)\\HomePage\\S.O.P (version 2.0).exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
	return 0;
}
