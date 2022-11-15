
#include <iostream>

void PayOfMounth(int &PayInMounth) {
    int SummOfCredit, YearsOfCredit; double FirstPay;
    bool IsValidEnter = false;
    std::cin >> SummOfCredit;
    do {
        std::cin >> FirstPay;
        if (FirstPay >= SummOfCredit * 0.2)
        IsValidEnter = true;
    } while(!IsValidEnter);
    std::cin >> YearsOfCredit;
    SummOfCredit -= FirstPay;
    PayInMounth = SummOfCredit/(YearsOfCredit*12);
}
int main() {
    int PayInMounth;
    PayOfMounth(PayInMounth);
    std::cout << PayInMounth;
}
