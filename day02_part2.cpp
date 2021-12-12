#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream input_stream ("input02", std::ifstream::in);

    int h = 0, d = 0, aim = 0;

    std::string operation;
    int number;

    while (input_stream >> operation) {
        input_stream >> number;

        if (operation == "forward") {
            h += number;
            d += number * aim;
        }
        if (operation == "up") aim -= number;
        if (operation == "down") aim += number;
    };

    std::cout << "Position is (" << h << "," << d << ")\n";
    std::cout << "Answer is " << h * d << std::endl;
}