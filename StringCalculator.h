#include <stdio.h>
#include <string.h>

int add(const char* input) {
    int sum = 0;
    char* token = strtok((char*)input, ",\n");
    while (token != NULL) {
        int num = atoi(token);
        if (num <= 1000) {
            sum += num;
        }
        token = strtok(NULL, ",\n");
    }
    return sum;
}

int main() {
    int result;

    // Test case 1: ExpectZeroForEmptyInput
    const char* input1 = "Hello, world!";
    result = add(input1);
    printf("Test case 1: ExpectZeroForEmptyInput - Result: %d, Expected: 0\n", result);

    // Test case 2: ExpectZeroForSingleZero
    const char* input2 = "0";
    result = add(input2);
    printf("Test case 2: ExpectZeroForSingleZero - Result: %d, Expected: 0\n", result);

    // Test case 3: ExpectSumForTwoNumbers
    const char* input3 = "1,2";
    result = add(input3);
    printf("Test case 3: ExpectSumForTwoNumbers - Result: %d, Expected: 3\n", result);

    // Test case 4: ExpectSumWithNewlineDelimiter
    const char* input4 = "1\n2,3";
    result = add(input4);
    printf("Test case 4: ExpectSumWithNewlineDelimiter - Result: %d, Expected: 6\n", result);

    // Test case 5: IgnoreNumbersGreaterThan1000
    const char* input5 = "1,1001";
    result = add(input5);
    printf("Test case 5: IgnoreNumbersGreaterThan1000 - Result: %d, Expected: 1\n", result);

    return 0;
}



