#include <iostream>
#include <fstream>

int main() {
    std::ifstream input_stream ("input01", std::ifstream::in);

    int counter = 0;
    int prev1, prev2, prev3, next;
    input_stream >> prev1;
    input_stream >> prev2;
    input_stream >> prev3;

    while (input_stream >> next) {
        if (prev1 < next) counter += 1;
        prev1 = prev2;
        prev2 = prev3;
        prev3 = next;
    };

    std::cout << "Answer is " << counter << std::endl;
}