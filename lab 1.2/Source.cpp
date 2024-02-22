#include <iostream>
#include "Payment.h"
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Payment payment;
    payment.Init("Девід", "Цай", "Цінфенович", 1000.0, 2010, 1, 13, 20, 24, 36000, 4000);
    payment.Display();

    return 0;
}
