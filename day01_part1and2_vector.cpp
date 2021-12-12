#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream input_stream ("input01", std::ifstream::in);

    std::vector<int> depths;
    int counter1 = 0, counter2 = 0;

    int depth;
    while (input_stream >> depth) {
        input_stream >> depth;
        depths.push_back(depth);
    };

    for (int i = 1; i < depths.size(); i++) {
        if (depths[i-1] < depths[i]) counter1 += 1;
    }

    for (int i = 3; i < depths.size(); i++) {
        if (depths[i-3] < depths[i]) counter2 += 1;
    }

    std::cout << "Part 1: Answer is " << counter1 << "\n";
    std::cout << "Part 2: Answer is " << counter2 << std::endl;
}