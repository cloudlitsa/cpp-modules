#ifndef SED_HPP
#define SED_HPP
#include <string>
#include <fstream> // For file operations
#include <iostream>

class Sed {
private:
    std::string filename; // Name of the file to operate on
    std::string searchStr; // String to be replaced
    std::string replaceStr; // String to replace with

    std::string readFile(void);
    bool writeFile(const std::string& content, const std::string& outputFilename);
    std::string replaceAll(const std::string& content, const std::string& search, const std::string& replace);

public:
    Sed(const std::string& filename, const std::string& s1, const std::string& s2); // Constructor to initialize the Sed object with filename, search string, and replace string
    ~Sed(); // Destructor to clean up resources
    bool processFile(void); // Method to process the file and perform replacements

    std::string getFilename(void) const; // Getter for filename
    std::string getSearchStr(void) const; // Getter for search string
    std::string getReplaceStr(void) const; // Getter for replace string
};

#endif
