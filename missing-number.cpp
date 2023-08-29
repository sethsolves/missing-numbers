#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int num;
    std::vector<int> vector1;

    std::cout << "Please enter a sequence of numbers to find the missing numbers among them (0 to stop): ";

    while (true) {
        std::cin >> num;
        if (num == 0) {
            break;
        }
        vector1.push_back(num);
    }

    std::vector<int> vector2;

    for (int i = vector1[0]; i < vector1.back(); i++) {
        if (std::find(vector1.begin(), vector1.end(), i) == vector1.end()) {
            vector2.push_back(i);
        }
    }

    std::cout << "The missing numbers are:";
    for (int missingNum : vector2) {
        std::cout << " " << missingNum;
    }
    std::cout << std::endl;

    return 0;
}
