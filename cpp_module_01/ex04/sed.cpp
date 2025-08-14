#include "sed.hpp"

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), searchStr(s1), replaceStr(s2) {
        // Constructor body (can be empty since we use member initializer list)
    }
Sed::~Sed() {
    // Destructor body (can be empty since we don't manage any dynamic resources)
}
//private method to read the file content
std::string Sed::readFile(void) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return ""; // Return empty string if file cannot be opened
    }
    std::string content;
    std::string line;
    while (std::getline(file, line)) {
        content += line;
        if (!file.eof()) {
            content += "\n";
        }
    }
    file.close();
    return content;
}
// private method to write the modified content to a new file
bool Sed::writeFile(const std::string& content, const std::string& outputFilename) {
    std::ofstream outFile(outputFilename);
    if (!outFile.is_open()) {
        std::cerr << "Error opening output file: " << outputFilename << std::endl;
        return false; // Return false if output file cannot be opened
    }
    outFile << content; // Write the modified content to the output file
    outFile.close();
    // std::cout << "File written successfully to: " << outputFilename << std::endl;
    return true; // Return true if writing was successful
}
//private method to replace all occurrences of a string in the content witout using std::string::replace
std::string Sed::replaceAll(const std::string& content, const std::string& search, const std::string& replace) {
    // if (search.empty()) {
    //     std::cout << "Nothing to replace with.\n";
    //     return content; // If search string is empty, return original content
    // }
    std::string result = content;
    size_t pos = 0;
    while ((pos = result.find(search, pos)) != std::string::npos) { // npos is a special constant indicating no position found, no substring found
        //manual replacement using substring and concatenation
        result = result.substr(0, pos) + replace + result.substr(pos + search.length());
        pos += replace.length(); // Move past the replaced part
    }
    return result;
}
//main public method to process the file and perform replacements
bool Sed::processFile(void) {
    // validate inputs
    if (filename.empty()) {
        std::cerr << "Invalid input parameters." << std::endl;
        return false; // Return false if any input is invalid
    }
    if (searchStr.empty()) {
        std::cerr << "Search string cannot be empty." << std::endl;
        return false; // Return false if search string is empty
    }
    // Read the file content
    std::string content = readFile();
    if (content.empty() && !filename.empty()) {
        return false; // Return false if reading the file failed
    }
    // Perform the replacement operation
    std::string modifiedContent = replaceAll(content, searchStr, replaceStr);
    // Write the modified content to a new file
    std::string outputFilename = filename + ".replace";
    return writeFile(modifiedContent, outputFilename);
}
// Getter for filename
std::string Sed::getFilename(void) const {
    return filename;
}
// Getter for search string
std::string Sed::getSearchStr(void) const {
    return searchStr;
}
// Getter for replace string
std::string Sed::getReplaceStr(void) const {
    return replaceStr;
}