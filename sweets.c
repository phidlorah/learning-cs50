#include <cs50.h>
#include <stdio.h>

int withoutDiscount(int price, int sweets);
int withDiscount(float price, int sweets, float discount);

int main(void)
{
    int sweets = get_int("How many sweets do you want? ");
    float discount = get_int("Discount: ");
    float price = 10.00;
    int discountedprice = withDiscount(price, sweets, discount);
    int nonediscountedprice = withoutDiscount(price, sweets);
    printf("price with discount:%i\n", discountedprice);
    printf("price without discount:%i\n", nonediscountedprice);
}
// calculate price without discount
int withoutDiscount(int price, int sweets)
{
    int totalprice = price * sweets;
    return totalprice;
}
// calculate price with discount
int withDiscount(float price, int sweets, float discount)
{
    float discountamount = (discount / 100) * price;
    int discounted = discountamount * sweets;
    int offer = withoutDiscount(price, sweets) - discounted;
    return offer;
}
