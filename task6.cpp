
#include <iostream>
#include <fstream>

void TouperAndTolover(std::string &StringToFile) {
    int ToASCII;
    char Symbol;
    std::ifstream f_input;
    f_input.open("someretext.txt");
    for (;;) {
        Symbol = f_input.get();
        if (f_input.eof())
        return;
        ToASCII = Symbol;
        if (64 < ToASCII && ToASCII < 91)
        ToASCII += 32;
        else if (96 < ToASCII && ToASCII < 123)
        ToASCII -= 32;
        Symbol = static_cast<char>(ToASCII);
        StringToFile += Symbol;
    }
    f_input.close();
}
int main() {
    std::ofstream f_output;
    std::string StringToFile;
    TouperAndTolover(StringToFile);
    f_output.open("someretext(modify).txt");
    f_output << StringToFile;
    f_output.close();
    return 0;
}
