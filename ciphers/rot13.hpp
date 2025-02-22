#ifndef ROT13_HPP
#define ROT13_HPP

#include <string>
#include <bits/stdc++.h>

class Rot13 {
    private:
        std::string decrypted;
    public:
        Rot13(std::string encrypted) {
            for (size_t x = 0; x < encrypted.size(); x++) {
                encrypted[x] = tolower(encrypted[x]);
            }
            decrypted = encrypted;
            for (size_t i = 0; i < encrypted.size(); i++) {
                if (encrypted[i] >= 'n') {
                    decrypted[i] = 'a' + ((encrypted[i] + 13) - 'z' - 1);
                } else {
                    decrypted[i] = encrypted[i] + 13;
                }
            }
        }
        std::string get_decrypted() {
            return decrypted;
        }
};

#endif