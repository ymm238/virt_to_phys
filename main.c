#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


static int buf[1024];

int main() {
    printf("virt_address 0x%lx\n", buf);
    sleep(1000);
    return 0;
};
