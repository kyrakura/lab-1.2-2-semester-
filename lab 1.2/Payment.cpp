#include "Payment.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void Payment::setLastName(string value)
{
    lastName = value;
}

void Payment::setFirstName(string value)
{
    firstName = value;
}

void Payment::setMiddleName(string value)
{
    middleName = value;
}

void Payment::setRate(double value)
{
    rate = value;
}

void Payment::setStartYear(int value)
{
    startYear = value;
}

void Payment::setBonusPercentage(double value)
{
    bonusPercentage = value;
}

void Payment::setIncomeTax(double value)
{
    incomeTax = value;
}

void Payment::setWorkedDays(int value)
{
    workedDays = value;
}

void Payment::setWorkDaysInMonth(int value)
{
    workDaysInMonth = value;
}

void Payment::setAccruedAmount(double value)
{
    accruedAmount = value;
}

void Payment::setWithheldAmount(double value)
{
    withheldAmount = value;
}

bool Payment::Init(string lastName, string firstName, string middleName, double rate, int startYear, double bonusPercentage, double incomeTax, int workedDays, int workDaysInMonth, double accruedAmount, double withheldAmount)
{
    setLastName(lastName);
    setFirstName(firstName);
    setMiddleName(middleName);
    setRate(rate);
    setStartYear(startYear);
    setBonusPercentage(bonusPercentage);
    setIncomeTax(incomeTax);
    setWorkedDays(workedDays);
    setWorkDaysInMonth(workDaysInMonth);
    setAccruedAmount(accruedAmount);
    setWithheldAmount(withheldAmount);
    return true;
}

void Payment::Display() const
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "Прізвище: " << lastName << endl;
    cout << "Ім'я: " << firstName << endl;
    cout << "По батькові: " << middleName << endl;
    cout << "Ставка: " << rate << endl;
    cout << "Рік поступлення на роботу: " << startYear << endl;
    cout << "Відсоток бонусу: " << bonusPercentage << endl;
    cout << "Прибутковий податок: " << incomeTax << endl;
    cout << "Кількість відпрацьованих днів в місяці: " << workedDays << endl;
    cout << "Кількість робочих днів в місяці: " << workDaysInMonth << endl;
    cout << "Нарахована сума: " << accruedAmount << endl;
    cout << "Утримана сума: " << withheldAmount << endl;
    cout << "Обчислення нарахованої суми: " << CalculateAccruedAmount() << endl;
    cout << "Обчислення утриманої суми: " << CalculateWithheldAmount() << endl;
    cout << "Обчислення суми, що видається на руки: " << CalculateNetAmount() << endl;
    int currentYear = 2024; 
    int experience = currentYear - startYear;
    cout << "Стаж: " << experience << " роки" << endl;
}

double Payment::CalculateAccruedAmount() const
{
    return rate * workedDays / workDaysInMonth + rate * bonusPercentage / 100.0;
}

double Payment::CalculateWithheldAmount() const
{
    return CalculateAccruedAmount() * (incomeTax / 100.0 + 0.01);
}

double Payment::CalculateNetAmount() const
{
    return CalculateAccruedAmount() - CalculateWithheldAmount();
}

int Payment::CalculateExperience(int currentYear) const
{
    return currentYear - startYear;
}
