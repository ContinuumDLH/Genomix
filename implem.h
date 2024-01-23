/// @Author D'Andrew Harrington

//include
#ifndef implem_h
#define implem_h

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

class Genomix {

    // *** PUBLIC MEMBERS ******************************************************
    public:
        /// @brief The default constructor.
        Genomix();

        /// @brief A parameterized constructor.
        Genomix(const std::string& name, const std::string& id);

        /// @brief Returns the name of the FASTA file.
        std::string name();

        /// @brief Returns the NCBI RefID of the FASTA file.
        std::string id();

        /// @brief Returns the FASTA input file.
        std::string input_file();

        /// @brief Returns the ag percentage in the loaded FASTA file.
        /// for gc percentage,
        /// For more information, SEE https://www.sciencedirect.com/
        /// topics/biochemistry-genetics-and-molecular-biology/gc-content
        double get_ag_percentage();

        /// @brief Returns the tg percentage in the loaded FASTA file.
        double get_tg_percentage();

        /// @brief Returns a new string in the loaded FASTA file to MRNA, if
        /// the original data is DNA and not MRNA.
        double get_mrna_from_dna();

        /// @brief Returns 6 strings of the 6 unique reading frames based on the
        /// MRNA. Not to be used for DNA as this would violate the central
        /// dogma of Biolgy.
        /// SEE:  https://www.genome.gov/genetics-glossary/Central-Dogma
        double create_reading_frames();

        /// @brief Mounts a FASTA file of the user's choice and specifies if
        /// the file provided is an RNA or DNA file.
        int give_fasta(std::string input_file);

    // *** PRIVATE MEMBERS *****************************************************
    private:
        std::string fasta_file          = "";
        static const size_t CAPACITY    = 14;  // Current array capacity.
        double stats[CAPACITY];      // Create an array to house FASTA data.
                                     /* 0   - Adenine       [Counts]
                                      * 1   - Thymine       [Counts]
                                      * 2   - Cytosine      [Counts]
                                      * 3   - Guanine       [Counts]
                                      * 4   - Uracil        [Counts]
                                      * 5   - AG            [Percentage]
                                      * 6   - TC            [Percentage]
                                      * 7   - DNA to MRNA   [Flowthrough]
                                      * 8   - RF+1          [Reading Frame ORG]
                                      * 9   - RF+2           [Reading Frame +1]
                                      * 10  - RF+3          [Reading Frame +2]
                                      * 11  - RF-1          [Reading Frame -ORG]
                                      * 12  - RF-2          [Reading Frame -1]
                                      * 13  - RF-3          [Reading Frame -2]*/

        std::string fasta_name;     // The name of the FASTA file loaded.
        std::string fasta_ref_id;   // The name of the NCBI reference director.
        double adenine;   // Compound which is of the 4 base nucleotides
        double cytosine;  // Compound which is of the 4 base nucleotides
        double guanine;   // Compound which is of the 4 base nucleotides
        double thymine;   // Compound which is of the 4 base nucleotides
        double uracile;   // Compound which is of the 4 base nucleotides (RNA)
    };

#endif // implen_h
/* EOF */
