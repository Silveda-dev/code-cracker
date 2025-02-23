#ifndef CAESAR_HPP
#define CAESAR_HPP

#include <string>
#include <bits/stdc++.h>

class Caesar {
    private:
        std::string decrypted;
        int rot;
    public:
        Caesar(std::string encrypted, int rot) : rot(rot) {
            for (size_t x = 0; x < encrypted.size(); x++) {
                encrypted[x] = tolower(encrypted[x]);
            }
            decrypted = encrypted;
            for (size_t i = 0; i < encrypted.size(); i++) {
                if (encrypted[i] > ('z' - rot)) {
                    decrypted[i] = 'a' + ((encrypted[i] + rot) - 'z' - 1);
                } else {
                    decrypted[i] = encrypted[i] + rot;
                }
            }
        }
        std::string get_decrypted() {
            return decrypted;
        }
};

#endif