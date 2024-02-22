// Payment.h 
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
using namespace std;

class Payment
{
private:
    string lastName;
    string firstName;
    string middleName;
    double rate;
    int startYear;
    double bonusPercentage;
    double incomeTax;
    int workedDays;
    int workDaysInMonth;
    double accruedAmount;
    double withheldAmount;

public:
    void setLastName(string value);
    void setFirstName(string value);
    void setMiddleName(string value);
    void setRate(double value);
    void setStartYear(int value);
    void setBonusPercentage(double value);
    void setIncomeTax(double value);
    void setWorkedDays(int value);
    void setWorkDaysInMonth(int value);
    void setAccruedAmount(double value);
    void setWithheldAmount(double value);

    bool Init(string lastName, string firstName, string middleName, double rate, int startYear, double bonusPercentage, double incomeTax, int workedDays, int workDaysInMonth, double accruedAmount, double withheldAmount);
    void Display() const;
    double CalculateAccruedAmount() const;
    double CalculateWithheldAmount() const;
    double CalculateNetAmount() const;
    int CalculateExperience(int currentYear) const;
};
