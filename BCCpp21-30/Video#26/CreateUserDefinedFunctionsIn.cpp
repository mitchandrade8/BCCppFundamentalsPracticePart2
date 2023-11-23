
#include <iostream>



void happyBirthday(std::string name);


int main() {

    // MARK: - Key Note
        // Function = a block of reusable code
    
    std::string name = "Mitch";

    happyBirthday(name);

    return 0;

}

void happyBirthday(std::string name) {

    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';

}