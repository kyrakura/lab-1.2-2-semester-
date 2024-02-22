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
    cout << "�������: " << lastName << endl;
    cout << "��'�: " << firstName << endl;
    cout << "�� �������: " << middleName << endl;
    cout << "������: " << rate << endl;
    cout << "г� ����������� �� ������: " << startYear << endl;
    cout << "³������ ������: " << bonusPercentage << endl;
    cout << "����������� �������: " << incomeTax << endl;
    cout << "ʳ������ ������������� ��� � �����: " << workedDays << endl;
    cout << "ʳ������ ������� ��� � �����: " << workDaysInMonth << endl;
    cout << "���������� ����: " << accruedAmount << endl;
    cout << "�������� ����: " << withheldAmount << endl;
    cout << "���������� ���������� ����: " << CalculateAccruedAmount() << endl;
    cout << "���������� �������� ����: " << CalculateWithheldAmount() << endl;
    cout << "���������� ����, �� �������� �� ����: " << CalculateNetAmount() << endl;
    int currentYear = 2024; 
    int experience = currentYear - startYear;
    cout << "����: " << experience << " ����" << endl;
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
