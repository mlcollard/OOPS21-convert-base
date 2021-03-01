/*
    convert.cpp

    Convert the string

    Note: The "CONCERNS" are for pedagogical purposes only
*/

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {

    // requires conversion option and string
    // CONCERNS: argc, argv, argv[0], error handling
    if (argc != 3) {
        std::cerr << "usage: " << argv[0] << " <option> <string>\n";
        return 1;
    }

    // conversion option
    // CONCERNS: argc == 3, argv, argv[1] is option, option
    std::string option(argv[1]);

    // input string
    // CONCERNS: argc == 3, argv, argv[2] is string, string
    std::string s = argv[2];

    // convert the string according to the option
    // CONCERNS: "--upper", "--lower", invalid options, error handling
    // CONCERNS: string, for loop, iteration, std::toupper(), std::tolower()
    if (option == "--upper") {

        for (auto pc = s.begin(); pc != s.end(); ++pc)
            *pc = std::toupper(*pc);

    } else if (option == "--lower") {

        for (auto pc = s.begin(); pc != s.end(); ++pc)
            *pc = std::tolower(*pc);

    } else {

        std::cerr << "Invalid conversion option: " << option << '\n';
        return 1;
    }

    // output converted string
    // CONCERNS: string, iteration, output format
    for (auto pc = s.cbegin(); pc != s.cend(); ++pc)
        std::cout << *pc;
    std::cout << '\n';

    return 0;
}
