#include <iostream>
#include <fstream>

int main() {
    std::ifstream input_stream ("input01", std::ifstream::in);

    int counter = 0;
    int prev, next;
    input_stream >> prev;

    while (input_stream >> next) {
        if (prev < next) counter += 1;
        prev = next;
    };

    std::cout << "Answer is " << counter << std::endl;
}