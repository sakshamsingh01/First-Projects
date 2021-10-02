#include <windows.h>

int main()
{
    char* linkChar="http://www.google.co.in";
    ShellExecute(NULL, NULL, linkChar, NULL, NULL, SW_SHOWNORMAL);
    return 0;
}
