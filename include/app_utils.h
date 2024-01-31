// app_utils.h

#ifndef APP_UTILS_H
#define APP_UTILS_H

#include <string>

class AppUtils {
public:
    static std::string generateUUID();
    static std::string generateToken();
    static std::string getCurrentTime();
    static std::string getCurrentDay();
    static std::string generateRandomUsername();
    static int generateRandomUserId();
};

#endif // APP_UTILS_H
