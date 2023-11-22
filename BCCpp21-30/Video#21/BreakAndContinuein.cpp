
#include <iostream>

int main() {

    // MARK: - Key Notes
        // 'BREAK' = break out of a loop
        // 'CONTINUE' = skip current iteration

    for (int i = 1; i <= 20; i++) {
        if(i == 13) {
            continue;
        }
        std::cout << i << '\n';
    }


    return 0;
    
}