#include <stdio.h>

int main()
{
    int current, last, units, bill, duebill, penalty, bill1, stage1, stage2, bill2;
    printf("enter current meter reading\n");
    scanf("%d", &current);
    printf("enter last month's reading\n");
    scanf("%d", &last);
    printf("units consumed this month is %d\n", units = current - last);
    printf("ALERT!!- net amount includes a service fees of 150₹ per month\n");
    // first route
    if (units <= 300)
    {
        bill = units * 5 + 150; // 150 is service charge
        penalty = bill * 0.1;

        if (bill < 250)
        {
            printf("NET PAYABLE AMOUNT --> 250 ₹\n");
            duebill = penalty + 250;
            printf("NET PAYABLE AMOUNT AFTER DUE DATE --> %d\n", duebill);
        }
        else
        {
            printf("NET PAYABLE AMOUNT --> %d ₹\n", bill = units * 5);
            duebill = penalty + bill;
            printf("NET PAYABLE AFTER DUE DATE --> %d ₹\n", duebill);
        }
    }
    // second route
    else if (units >= 301 && units <= 800)
    {
        stage1 = units - 300;
        bill1 = stage1 * 7 + 1500 + 150; // 150 is service charge
        penalty = bill1 + bill1 * 0.1;
        printf("NET PAYABLE --> %d\n", bill1);
        printf("NET PAYABLE AFTER DUE DATE --> %d\n", penalty);
    }
    // third route
    else if (units >= 801)
    {
        stage2 = units - 800;
        bill2 = stage2 * 10 + 5000 + 150; // 150 is service charge
        penalty = bill2 + bill2 * 0.1;
        printf("NET PAYABLE --> %d\n", bill2);
        printf("NET PAYABLE AFTER DUE DATE --> %d\n", penalty);
    }
system("pause"); //ignore the implicit error warning in console 
    return 0;
}
