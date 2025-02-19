#include <iostream>
#include "entropy.hpp"

void test_letter_count(Entropy e) {
    int* e_ptr = e.get_enc_letter_count();
    for (int i = 0; i < 26; i++) {
        std::cout << "Item " << i << ": " << *(e_ptr+i) << std::endl;
    }

    return;
}

int main() {
    Entropy e;
    test_letter_count(e);
    return 0;
}