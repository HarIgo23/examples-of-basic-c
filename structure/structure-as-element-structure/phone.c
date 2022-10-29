#include <stdio.h>

struct company
{
    char *name;
    char *country;
};

struct smartphone
{
    char *title;
    int price;
    struct company manufacturer;
};

int main(void)
{
    struct smartphone phone = {"iPhone 8", 56000, "Apple", "USA"};
    printf("Phone: %s \n", phone.title);
    printf("Price: %d \n", phone.price);
    printf("Manufacturer: %s \n", phone.manufacturer.name);
    printf("Manufacturer country: %s \n", phone.manufacturer.country);
    return 0;
}
