#include <windows.h>

int main(void) {

    MessageBoxW(
        NULL,
        L"ACCEPTER",
        L"ATTENTION",
        MB_OKCANCEL | MB_ICONEXCLAMATION
        


    );
    return EXIT_SUCCESS;

}