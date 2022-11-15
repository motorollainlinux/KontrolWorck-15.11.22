
#include <iostream>

int main() {
    int Quarter;
    Definition(Quarter);
    std::cout << Quarter;
}
void Definition(int &Quarter) {
    int X, Y;
    std::cin >> X >> Y;
    if (X > 0 && Y > 0)
    Quarter = 1;
    else if (X < 0 && Y > 0)
    Quarter = 2;
    else if (X < 0 && Y < 0)
    Quarter = 3;
    else
    Quarter = 4;
}

