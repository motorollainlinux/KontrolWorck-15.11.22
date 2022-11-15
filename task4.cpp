
#include <iostream>
#include <fstream>

void CountOfString(int &CountStrng) {
    std::ifstream f_input;
    f_input.open("Text.txt");
    for (;;) {
        if (f_input.get() == '\n')
        CountStrng++;
        else if (f_input.eof())
        return;
    }
}
int main() {
    int CountStrng = 1;
    CountOfString(CountStrng);
    std::cout << CountStrng;
}
