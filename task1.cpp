#include <iostream>

int main() {

    // ASCI rane 33 - 125
    int count = 32;
    char pass[33];
    std::cout << "Enter pass length (max 32): ";
    std::cin >> count;
    if (count > 32)
        count = 32;
    int i;
    for (i = 0; i < count; ++i) {
        
        pass[i] = 33 + ( std::rand() % ( 125 - 33 + 1 ) );
    }
    pass[i] = '\0';
    std::cout << pass << std::endl;
    return 0;
}