#include <stdio.h>

struct SItemStruct
{
    char *name;
    int quantity;
    float price;
};

union UItemUnion {
    int item;
    float currency;
    char myName;
};

void main()
{
    // Union
    union UItemUnion itemSaya;
    union UItemUnion *alamatItemSaya;

    itemSaya.item = 64;
    printf("Ini adalah union i = %d, f = %0.1f, c = %c \n", itemSaya.item, itemSaya.currency, itemSaya.myName);

    alamatItemSaya = &itemSaya;
    alamatItemSaya->currency = 20.01;
    printf("Ini adalah alamat union i = %d, f = %0.1f, c = %c \n", alamatItemSaya->item, alamatItemSaya->currency, alamatItemSaya->myName);


    // itemSaya.currency = 10.12;
    // printf("Ini adalah union i %0.1f \n", itemSaya.currency);

    // itemSaya.myName = "Zanuar";
    // printf("Ini adalah union i %c \n", itemSaya.myName);


    // Struct
    printf("Struct and union \n");
    struct SItemStruct myItems;

    myItems.name = "asdasda";

    printf("This is my item %s \n", myItems.name);

    printf("Mencetak struct secara keseluruhan: %p \n", (void *)&myItems);
}