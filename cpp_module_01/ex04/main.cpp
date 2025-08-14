#include "sed.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        return 1; // Exit with error code if the number of arguments is incorrect
    }

    std::string filename = argv[1];
    std::string searchStr = argv[2];
    std::string replaceStr = argv[3];

    // create Sed object and process the file
    Sed processFile(filename, searchStr, replaceStr);
    Sed sed(filename, searchStr, replaceStr); // Create a Sed object with the provided arguments

    if (!sed.processFile()) {
        std::cerr << "Error processing file." << std::endl;
        return 1; // Exit with error code if file processing fails
    }

    return 0; // Exit successfully
}