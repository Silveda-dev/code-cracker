#ifndef ENTROPY_HPP
#define ENTROPY_HPP

#include <iostream>

class Entropy {
    private:
        //Letter frequencies sourced from https://www3.nd.edu/~busiforc/handouts/cryptography/letterfrequencies.html
        float theoretical_letter_frequency[26] = {8.50,2.07,4.54,3.38,11.16,1.81,2.47,3.00,7.54,0.20,1.10,5.49,3.01,6.65,7.16,3.17,0.20,7.58,5.74,6.95,3.63,1.01,1.29,0.29,1.78,0.27};
        int enc_letter_count[26];
        float enc_letter_frequency[26];
        int entropy_val;
        void count_letters(std::string encrypted);
        void calc_frequencies();
        void calc_entropy();
    public:
        Entropy(std::string encrypted);
        int get_entropy();
        ~Entropy();
};

#endif