#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int strlonger(char* s, char* t) {
    return strlen(s) - strlen(t) > 0;
}

int uadd_ok(unsigned x, unsigned y) {
    if (x+y < x)
       return 0;
    return 1;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    return sum;
}

int div16(int x) {
    int bias = x >> 31 & 0xF;
    return (x + bias) >> 4;
}


int main()
{
    long sum = 0;
    long i;
    for (i = 0; i < 5; i++) {
        if (i & 1)
            continue;
        sum += i;
    }
    
    
    return 0;
    int xxx = 10^2;
    printf("Number is: %d", (int)pow(10,9));
    return 0;
    int x = -3;
    int y = 1;
    
    unsigned ux = x;
    unsigned uy = y;



    unsigned t = x * y;
    //int zz = -z;
    printf("Number is: %u", ux + uy);
    return 0;
#pragma region code
    //char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

   //printf("message size: %d\n", strlen(greeting));
  /* unsigned int aaa = 0;
   unsigned int bbb = 2;
   int ccc = aaa - bbb ;
   printf("message size: %d\n", ccc);*/

   /* int ele_cnt = 1048577;
   size_t ele_size = 4096;

   long long unsigned required_size = ele_cnt * ele_size;

   printf("This is %llu", required_size);
   */

   //
   //int l = 0xdeadbeef;
   //short s = 0xbeef;

   ////long long aaa = 
#pragma endregion
}


