#include <iostream>
#include "entropy.hpp"

void test_letter_count(Entropy e) {
    int* e_ptr = e.get_enc_letter_count();
    for (int i = 0; i < 26; i++) {
        std::cout << "Item " << i << ": " << *(e_ptr+i) << std::endl;
    }

    return;
}

void test_letter_frequency(Entropy e) {
    float* e_ptr = e.get_enc_letter_frequency();
    for (int i = 0; i < 26; i++) {
        std::cout << "Item " << i << ": " << *(e_ptr+i) << std::endl;
    }

    return;
}

void test_entropy(Entropy e) {
    std::cout << "Entropy: " << e.get_entropy() << std::endl;
    return;
}

int main() {
    Entropy e("asdfjlkafsdjklsdfaasfdsdfjklljkljksdfjkl");
    test_letter_count(e);
    test_letter_frequency(e);
    test_entropy(e);
    return 0;
}