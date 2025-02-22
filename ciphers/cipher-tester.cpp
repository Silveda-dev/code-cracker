#include <iostream>
#include <string>
#include "rot13.hpp"
using namespace std;

int main() {
    Rot13 r("abcdefghijklmnopqrstuvwxyz");
    cout << r.get_decrypted() << endl;

    return 0;
}