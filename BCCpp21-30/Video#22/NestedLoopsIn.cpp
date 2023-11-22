
#include <iostream>

int main() {

    // MARK: - Key Notes
        // A 'Nested Loop' = a loop inside another loop

    // Simple loop that goes up to 10:

    /* for (int i = 0; i <= 10; i++) {
        std::cout << i << ' ';
    } */

    // Example with loop up to 10 3 seperate times:

    for (int i = 1; i <= 3; i++) {
        // Named out index for each loop i and then j 
        for (int j = 0; j <= 10; j++) {
            std::cout << j << ' ';
        }
        // Puts other iterations on a new line
        std::cout << '\n';
    }

    return 0;

}