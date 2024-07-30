#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_SIZE 1024

int add(const char* input) {
    int sum = 0;
    int num1 = 0, num2 = 0;

    char* delimiter = strchr(input, ',');
    if (!delimiter) { // only one number
        for (char* p = input; *p; p++) {
            int digit = 0;
            while (isdigit(*p)) {
                digit = digit * 10 + *p++ - '0';
            }
            if (p == input ||!isdigit(*p)) {
                return 0;
            }
            num1 = digit;
            input = p;
        }
        sum = num1;
    } else { // two numbers
        for (char* p = input; *p; p++) {
            int digit = 0;
            while (isdigit(*p)) {
                digit = digit * 10 + *p++ - '0';
            }
            if (p == input ||!isdigit(*p)) {
                return 0;
            }
            if (num1 == 0) {
                num1 = digit;
            } else {
                num2 = digit;
                sum = num1 + num2;
                break;
            }
            input = p;
        }
    }

    return sum;
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
