// Union

// Almost same as structure but all values are stored in one memory slot and are overwritten by the latest value. It also has multiple data types in it like structure.

#include <stdio.h>
#include <string.h>

union un
{
    int x;      // 2 bytes
    float y;    // 4 bytes
    char z[10]; // 1*10 bytes = 10 bytes
};

// A union will have the size of the highest data types that's been mentioned. In the present case the size of the union will be 10 bytes.

int main()

{
    union un u1;

    u1.x = 9;
    u1.y = 2.5;
    strcpy(u1.z, "Hello");

    // Displaying the output

    printf("%d     %f     %s", u1.x, u1.y, u1.z);
}

// Check the output of this program.

// Since there's only 10 bytes of storage, only latest value would be stored.