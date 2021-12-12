#include <iostream>
#include <fstream>
#include <queue>

int main() {
    std::ifstream input_stream ("input01", std::ifstream::in);
    
    int counter = 0;
    int prev, next;

    std::queue<int> queue;
    for (int i = 0; i < 3; i++) {
        input_stream >> next;
        queue.push(next);
    }

    while (input_stream >> next) {
        prev = queue.front();
        if (prev < next) counter += 1;
        queue.pop();
        queue.push(next);
    };

    std::cout << "Answer is " << counter << std::endl;
}