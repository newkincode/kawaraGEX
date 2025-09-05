#include <windows.h>
#include <string>
#include <iostream>
#include <string>

std::string ExePath() {
    TCHAR buffer[MAX_PATH] = { 0 };
    GetModuleFileName(NULL, buffer, MAX_PATH);

#ifdef UNICODE
    // Convert wide TCHAR string to std::string (UTF-8)
    int size_needed = WideCharToMultiByte(CP_UTF8, 0, buffer, -1, NULL, 0, NULL, NULL);
    std::string result(size_needed - 1, 0); // -1 to exclude null terminator
    WideCharToMultiByte(CP_UTF8, 0, buffer, -1, &result[0], size_needed, NULL, NULL);
    return result;
#else
    // TCHAR is char, so we can directly construct std::string
    return std::string(buffer);
#endif

}

int main() {

    std::cout << "my directory is : " << ExePath() << std::endl;
}