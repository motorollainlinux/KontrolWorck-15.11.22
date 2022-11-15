
#include <iostream>

using namespace std;
void BiggerNumber(int &Result) {
     int num1, num2;
     cin >> num1>>num2;
     if (num1 > num2) {
         Result = num1;
     } else {
         Result = num2;
     }
}
int main() {
     int Result;
     BiggerNumber(Result);
     cout << Result;
     return 0;
}
