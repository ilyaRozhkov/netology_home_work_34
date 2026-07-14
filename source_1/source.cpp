#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::unordered_map<char, int> freq;
    for (char ch : text) {
        ++freq[ch];
    }

    std::vector<std::pair<char, int>> sorted(freq.begin(), freq.end());

    std::sort(sorted.begin(), sorted.end(),
        [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            return a.second > b.second;
        });

    for (std::vector<std::pair<char, int> >::iterator it = sorted.begin();
        it != sorted.end(); ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    return 0;
}
