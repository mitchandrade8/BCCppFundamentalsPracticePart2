
#include <iostream>

std::string concatString(std::string string1, std::string string2);

int main() {

    std::string firstName = "Everyday";
    std::string lastName = "I'm Hustlin'";

    return 0;

}

std::string concatString(std::string string1, std::string string2) {
    return string1 + " " + string2;
}