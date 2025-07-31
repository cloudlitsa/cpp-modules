#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    std::string announcement;
    for (int i = 1; i < argc; ++i) {
        announcement += argv[i];
    }
    for (size_t i = 0; i < announcement.size(); ++i) {
        announcement[i] = toupper(announcement[i]);
    }
   std::cout << announcement << std::endl;
    return 0;
}



// int main(int argc, char **argv) {
//     if (argc < 2) {
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//         return 0;
//     }

//     for (int i = 1; i < argc; ++i) {
//         std::string arg = argv[i];
//        // std::cout << arg << " " << i << "\n";
//         for (char &c : arg) {
//             c = toupper(c);
//         }
//        std::cout << arg;
//     }
//     std::cout << std::endl;

//     return 0;
// }
    