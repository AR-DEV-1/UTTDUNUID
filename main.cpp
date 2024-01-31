// main.cpp

#include "app_utils.h"
#include <iostream>

int main() {
    std::cout << "UUID: " << AppUtils::generateUUID() << std::endl;
    std::cout << "Token: " << AppUtils::generateToken() << std::endl;
    std::cout << "Current Time: " << AppUtils::getCurrentTime() << std::endl;
    std::cout << "Current Day: " << AppUtils::getCurrentDay() << std::endl;
    std::cout << "Random Username: " << AppUtils::generateRandomUsername() << std::endl;
    std::cout << "Random User ID: " << AppUtils::generateRandomUserId() << std::endl;

    return 0;
}
