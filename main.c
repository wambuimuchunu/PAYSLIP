/*
Githonga`s Factory,
Created by DIT-01-8689/2021,
July 2022,
MIT Licenne,
C89 Complier,

*/

#include <stdio.h>


int main()
{   int totalhoursWorked = 40;
    int KRAPin, employmentNo, hoursWorked, normalPay, overtimePay, taxPaid, netincome;
    char name[100];

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your employee number: ");
    scanf("%d", &employmentNo);

    printf("Enter your KRA pin: ");
    scanf("%d", &KRA Pin);

    printf("Enter number of hours worked:");
    scanf("%d", &hoursworked);

    normalPay - 1000 * totalhoursWorked;
    overtimePay = (hourWorked - totalhoursWorked) *1500;
    taxPaid - normalPay *30/100:
    netIcome = (normalPay - taxPaid) + overtimePay;

    printf("normalPay: %d\n", normalPay);
    printf("overtimePay: %d\n", overtimePay);
    printf("taxPaid: %d\n", taxPaid);
    printf("netIncome: %d\n", netIncome);

    return 0;
}
