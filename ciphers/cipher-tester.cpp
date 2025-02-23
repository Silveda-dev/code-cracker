#include <iostream>
#include <string>
#include "rot13.hpp"
#include "caesar.hpp"
using namespace std;

int main() {
    Rot13 r("aBcdeFghijklmNopqrstuvwxyz");
    cout << "ROT13 decryption: " << r.get_decrypted() << endl;
    Caesar c("aBcdeFghijklmNopqrstuvwxyz", 11);
    cout << "Caesar (11) decryption: " << c.get_decrypted() << endl;
    return 0;
}