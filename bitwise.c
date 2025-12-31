#include <stdio.h>

int main() {
//Abhishek Kumar 10051//
    int a, b, choice, result;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\n--- Bitwise Utility Tool ---\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a & b;
            printf("Result = %d\n", result);
            break;
        case 2:
            result = a | b;
            printf("Result = %d\n", result);
            break;
        case 3:
            result = a ^ b;
            printf("Result = %d\n", result);
            break;
        case 4:
            result = a << b;
            printf("Result = %d\n", result);
            break;
        case 5:
            result = a >> b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
//output//
//Enter first integer: 5//
//Enter second integer: 2//

//--- Bitwise Utility Tool ---//
//1. AND (&)//
//2. OR (|)//
//3. XOR (^)//
//4. Left Shift (<<)//
//5. Right Shift (>>)//
//Enter your choice: 1//
//Result = 0//


//=== Code Execution Successful ===//