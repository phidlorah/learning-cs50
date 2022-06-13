#include <cs50.h>
#include <stdio.h>

int agenumber(int year);
int totalprice(int price, int bottles);
int main(void)
{
    int year = get_int("what year were you born? ");
    int age = agenumber(year);
    if (age < 18)
    {
        printf("You are not the legal age to buy alcohol.\n");
    }
    else if (age > 18)
    {
        int bottles = get_int("how many bottles do you want? ");
        int price = get_int("how much does one bottle cost? ");
        int fullprice = totalprice(price, bottles);
        int fullcost = totalprice(price, bottles);
        printf("200:%i\n", fullprice);
    }
}

// calculating the age
int agenumber(int year)
{
    int totalage = 2022 - year;
    return totalage;
}

// calculating the price
int totalprice(int price, int bottles)
{
    int totalprice = price * bottles;
    return totalprice;
}