#include <iostream>
#include <string>
using namespace std;

int main() {
    string encrypted, do_entropy;
    float entropy;

    cout << "Welcome to Code Cracker - helping you decrypt a range of ciphers." << endl;
    cout << "Please enter the string to decrypt:  ";
    cin >> encrypted;
    cout << "Would you like to begin by calculating entropy and receiving suggestions on likely ciphers? (Y/N)  ";
    cin >> do_entropy;
    while (do_entropy != "Y" && do_entropy != "N") {
        cout << "Please enter either Y or N. Re-enter here: ";
        cin >> do_entropy;
    }

    if (do_entropy == "Y") {
        //Call entropy calculation function
    }

    //Move to decrypting stage 
}