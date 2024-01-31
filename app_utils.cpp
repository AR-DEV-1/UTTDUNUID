// app_utils.cpp

#include "app_utils.h"
#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <random>
#include <ctime>

std::string AppUtils::generateUUID() {
    // Implement UUID generation logic (you may use a library or a custom algorithm)
    // For simplicity, let's just use a random string for illustration
    return "xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx";
}

std::string AppUtils::generateToken() {
    // Implement token generation logic (you may use a library or a custom algorithm)
    // For simplicity, let's just use a random string for illustration
    return "random_token";
}

std::string AppUtils::getCurrentTime() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    std::stringstream timeStream;
    timeStream << std::put_time(std::localtime(&now_c), "%Y-%m-%d %H:%M:%S");
    return timeStream.str();
}

std::string AppUtils::getCurrentDay() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    std::stringstream dayStream;
    dayStream << std::put_time(std::localtime(&now_c), "%A");
    return dayStream.str();
}

std::string AppUtils::generateRandomUsername() {
    // Implement random username generation logic
    // For simplicity, let's use a fixed prefix and a random number
    return "user_" + std::to_string(generateRandomUserId());
}

int AppUtils::generateRandomUserId() {
    // Implement random user ID generation logic
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1000, 9999);
    return dist(gen);
}
