#include "validation.hpp"
#include <algorithm>
#include <iostream>
#include <string>

std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    default:
        return "-1";
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2) {
    if (pass1.empty() && pass2.empty()) {
        return true;
    }

    if (pass1.empty() || pass2.empty()) {
        return false;
    }

    if (pass1.compare(pass2) == 0) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(std::string pass) {
    if (pass.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!std::any_of(pass.begin(), pass.end(), isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::all_of(pass.begin(), pass.end(), isalnum)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!std::any_of(pass.begin(), pass.end(), isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string pass1, std::string pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}