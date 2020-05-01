#include "convert.h"
#include "bitwise_op.h"
#include "toggle.h"
#include "bit_field.h"

#include <stdio.h>

int main(int argc, char** argv) {
    long long bin;
    printf("Enter the a binary number: ");
    scanf("%lld", &bin);

    int res = convertToDec(bin);
    printf("Binary: %lld = Decimal: %d\n\n", bin, res);

    int dec1, dec2;
    printf("Enter a decimal number (base 10): ");
    scanf("%d", &dec1);

    bin = convertToBinary(dec1);
    printf("Decimal: %d = Binary: %lld\n\n", dec1, bin);

    printf("Enter two decimal numbers: ");
    scanf("%d %d", &dec1, &dec2);

    bin = onesComplement(dec1);
    printf("Negation of %d is %lld\n", dec1, bin);

    bin = bitOp(dec1, dec2, AND);
    printf("Binary of %d & %d is %lld\n", dec1, dec2, bin);

    bin = bitOp(dec1, dec2, OR);
    printf("Binary of %d | %d is %lld\n", dec1, dec2, bin);

    bin = bitOp(dec1, dec2, XOR);
    printf("Binary of %d ^ %d is %lld\n", dec1, dec2, bin);

    bin = shift(dec1, 2, LEFT);
    printf("%lld shifted to left by 2 is %lld\n", convertToBinary(dec1), bin);


    bin = shift(dec1, 2, RIGHT);
    printf("%lld shifted to right by 2 is %lld\n\n", convertToBinary(dec1), bin);


    printf("Enter any number: ");
    scanf("%d", &dec1);
    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &dec2);

    int bits;
    if(!readBit(dec1, dec2)) {
        bits = setBit(dec1, dec2);
        printf("The %d bit was set to 1\n", dec2);
    } else {
        bits = unsetBit(dec1, dec2);
        printf("The %d bit was unset to 0\n", dec2);
    }

    printf("Decimal before: %d Binary before: %lld\n", dec1, convertToBinary(dec1));
    printf("Decimal after: %d Binary after: %lld\n", bits, convertToBinary(bits));
    bits = toggleBit(bits, dec2);
    printf("Decimal after toggle: %d Binary after toggle: %lld\n\n", bits, convertToBinary(bits));

    struct onscreen_box box = initialize();
    printf("Original box settings: \n");
    print_box();

    box.opaque = 1;
    box.fill_color = 3;
    box.border_color = 5;
    box.border_style = 2;

    modify_box(box);

    printf("\n\nModified box settings: \n");
    print_box();

    return 0;
}
