#include <iostream>   // For use of iostream operations.
#include <cmath>      // For use of fabs function.
#include <string>     // Allows for use of string dtype.
#include <cassert>    // Allows for case assertions for debugging.
#include "implem.h"   // Grab the headerfile for genomix.

// *** FUNCTIONS ***************************************************************

Genomix::Genomix() {
    fasta_name      = "";
    fasta_ref_id    = "";
    adenine         = 0;
    thymine         = 0;
    cytosine        = 0;
    guanine         = 0;
    uracile         = 0;
    for (size_t index = 0; index < CAPACITY; index++) {
        stats[index] = 0;
    }
}

Genomix::Genomix(const std::string& name, const std::string& id) {
    fasta_name      = name;
    fasta_ref_id    = id;
    adenine         = 0;
    thymine         = 0;
    cytosine        = 0;
    guanine         = 0;
    uracile         = 0;
    for (size_t index = 0; index < CAPACITY; index++) {
        stats[index] = 0;
    }
}

std::string Genomix::name(){
    return fasta_name;
    }

std::string Genomix::id(){
    return fasta_ref_id;
    }

double Genomix::get_ag_percentage(){
    return 0.0;  // TODO
    }

double Genomix::get_tg_percentage(){
    return 0.0;  // TODO
    }

double Genomix::get_mrna_from_dna(){
    return 0.0;  // TODO
    }

double Genomix::create_reading_frames(){
    return 0.0;  // TODO
    }

int Genomix::give_fasta(std::string input){
    std::ofstream outFile(input);

    if (outFile.is_open()) {
        // TODO
    } else {
        std::cout << "Unable to launch file for read/write.\n";
        return 1;
    }
    return 0;
}
