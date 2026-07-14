#include <iostream>
#include <set>

int main() {
    int n;
    std::cout << "Enter the number of digits: ";
    std::cin >> n; 

    std::set<int, std::greater<int>> unique_sorted; 

    for (int i = 0; i < n; ++i) {
        std::cout << std::endl << "Enter the numbers: ";
        int x;
        std::cin >> x;
        unique_sorted.insert(x);
    }
    std::cout << std::endl << "Ouut numbers: " << std::endl;
    for (int val : unique_sorted) {
        std::cout << val << "\n";
    }

    return 0;
}
