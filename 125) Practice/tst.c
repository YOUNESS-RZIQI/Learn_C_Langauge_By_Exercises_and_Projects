#include <unistd.h>

void print_bits(unsigned char oct)
{
    unsigned char result;
    int i = 8;

    while ((i--) > 0)
    {
        result = (oct >> i & 1) + '0';
        write(1, &result, 1);
    }
}

int main(void)
{

    print_bits(2);
    return 0;
}