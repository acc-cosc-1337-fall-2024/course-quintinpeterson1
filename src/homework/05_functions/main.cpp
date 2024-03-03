#include "func.h"
#include <iostream>
#include <string>

int main() {
    int option;
    string dna;

    do {
        // menu
        cout << "Menu\n";
        cout << "1- Get GC Content\n";
        cout << "2- Get DNA Complement\n";
        cout << "3- Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

    switch (option) {
            case 1:
                cout << "Enter the DNA string: ";
                cin >> dna;
                cout << "GC content: " << get_gc_content(dna) << "\n";
                break;
            case 2:
                cout << "Enter the DNA string: ";
                cin >> dna;
                cout << "DNA complement: " << get_dna_complement(dna) << "\n";
                break;
            case 3:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Please enter a number between 1 and 3.\n";
        }
    } while (option != 3);

    return 0;
}