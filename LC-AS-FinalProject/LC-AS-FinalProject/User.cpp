#include "User.h"


User::User(string username1, string password1) : password1(pasword1), username1(username1) {}
string User::getUsername() const {
    return username1;
}

string User::getPassword() const {
    return password1;
}

