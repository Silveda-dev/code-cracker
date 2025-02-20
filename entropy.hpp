#ifndef ENTROPY_HPP
#define ENTROPY_HPP

#include <iostream>
#include <string>

class Entropy {
    private:
        //Letter frequencies sourced from https://www3.nd.edu/~busiforc/handouts/cryptography/letterfrequencies.html
        float theoretical_letter_frequency[26] = {8.50,2.07,4.54,3.38,11.16,1.81,2.47,3.00,7.54,0.20,1.10,5.49,3.01,6.65,7.16,3.17,0.20,7.58,5.74,6.95,3.63,1.01,1.29,0.29,1.78,0.27};
        int enc_letter_count[26] = {0};
        float enc_letter_frequency[26];
        int entropy_val;
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
        };
        void calc_frequencies() {
            int sum = 0;
            for (int i = 0; i < 26; i++) {
                sum += enc_letter_count[i];
            }
            for (int j = 0; j < 26; j++) {
                enc_letter_frequency[j] = (static_cast<float>(enc_letter_count[j])/static_cast<float>(sum));
            }
        }
        void calc_entropy();
    public:
        Entropy(std::string encrypted) {
            count_letters(encrypted);
            calc_frequencies();
        };
        int get_entropy();
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