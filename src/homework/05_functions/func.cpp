//add include statements
#include <string>
#include "func.h"

using namespace std;
//add function code here

double get_gc_content(const string& dna) {
    int count_GC = 0;
    for (char nucleotide : dna) {
        if (nucleotide == 'G' || nucleotide == 'C') {
            count_GC++;
        }
    }
    return static_cast<double>(count_GC) / dna.length();
}


string get_dna_complement(string dna) {
    // Reverse of string
    int n = dna.length();
    for (int i = 0; i < n / 2; i++) {

        char na = dna[i];
        dna[i] = dna[n - i - 1];
        dna[n - i - 1] = na;

    }
    // complementation of DNA nucleotides
    for (char& nucleotide : dna) {

        switch (nucleotide) {
            case 'A':
                nucleotide = 'T';
                break;
            case 'T':
                nucleotide = 'A';
                break;
            case 'C':
                nucleotide = 'G';
                break;
            case 'G':
                nucleotide = 'C';
                break;
            default:
                
                break;
        }
    }
    return dna;
}

string reverse_string(string dna) {
    // Reverse of string
    int n = dna.length();

    for (int i = 0; i < n / 2; i++) {
        char na = dna[i];
        dna[i] = dna[n - i - 1];
        dna[n - i - 1] = na;

    }
    return dna;
}