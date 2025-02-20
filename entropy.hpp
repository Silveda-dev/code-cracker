#ifndef ENTROPY_HPP
#define ENTROPY_HPP

#include <iostream>
#include <string>
#include <bits/stdc++.h>

class Entropy {
    private:
        int enc_letter_count[26] = {0};
        float enc_letter_frequency[26] = {0};
        float entropy_val;
        void count_letters(std::string encrypted) {
            char c = 'a';
            for (int i = 0; i < 26; i++) {
                std::size_t pos_found = -1;
                do {
                    pos_found = encrypted.find(c,pos_found+1);
                    if (pos_found != -1) {
                        enc_letter_count[i]++;
                    }
                } while (pos_found != -1);
                c++;
            }
        }
        void calc_frequencies() {
            int sum = 0;
            for (int i = 0; i < 26; i++) {
                sum += enc_letter_count[i];
            }
            for (int j = 0; j < 26; j++) {
                enc_letter_frequency[j] = (static_cast<float>(enc_letter_count[j])/static_cast<float>(sum));
            }
        }
        void calc_entropy() {
            entropy_val = 0;
            for (int i = 0; i < 26; i++) {
                if (enc_letter_frequency[i] != 0) {
                    entropy_val += (enc_letter_frequency[i] * std::log(enc_letter_frequency[i]));
                }
            }

            entropy_val = -entropy_val;
            return;
        }
    public:
        Entropy(std::string encrypted) {
            count_letters(encrypted);
            calc_frequencies();
            calc_entropy();
        }
        float get_entropy() {
            return entropy_val;
        }
        ~Entropy(){};

        //Debugging functions
        Entropy(){};
        int* get_enc_letter_count() {
            return &enc_letter_count[0];
        }
        float* get_enc_letter_frequency() {
            return &enc_letter_frequency[0];
        }
};

#endif