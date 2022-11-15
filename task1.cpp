
#include <iostream>

void BiggerNumber(int &Result) {
    int num1, num2;
    std::cin >> num1>>num2;
    if (num1 > num2)
    Result = num1;
    else
    Result = num2;
}
int main() {
    int Result;
    BiggerNumber(Result);
    std::cout << Result;
}
