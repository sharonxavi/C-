#include <iostream>
#include <regex>

int main() {
    std::string text = "Hello, world!";
    std::string pattern = "world";

    std::regex regex(pattern);

    if (std::regex_search(text, regex)) {
        std::cout << "Pattern found in the text." << std::endl;
    } else {
        std::cout << "Pattern not found in the text." << std::endl;
    }

    return 0;
}

