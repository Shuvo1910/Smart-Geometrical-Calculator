#include <stdio.h>

int main() {
    int choice;
    printf("===============================\n");
    printf("      Geometry Calculator\n"); 
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("3. Volume of CUBE\n");
    printf("4. Simple Calculator\n");
    printf("===============================\n");
    printf("Enter Your Choice 1-4: ");
    scanf("%d", &choice); 

    if (choice == 1) {
        float radius;
        printf("\n--- Circle Area Calculator ---\n\n");
        printf("Enter radius of Circle: ");
        scanf("%f", &radius);
        float area = 3.1416 * radius * radius;
        printf("Area of Circle: %.2f square units\n", area);
    }

    else if (choice == 2) {
        int side;
        printf("\n--- Square Area Calculator ---\n\n");
        printf("Enter side of Square: ");
        scanf("%d", &side);
        int area = side * side;
        printf("Area of Square: %d square units\n", area);
    }

    else if (choice == 3) {
        int h, w, d;
        printf("\n--- CUBE Volume Calculator ---\n\n");
        printf("Enter Height: ");
        scanf("%d", &h);
        printf("Enter Width: "); 
        scanf("%d", &w);
        printf("Enter Depth: ");
        scanf("%d", &d);
        int volume = h * w * d;
        printf("Volume of CUBE: %d cubic units\n", volume);
    }

    else if (choice == 4) {
        int a, b;
        printf("\n--- Simple Calculator ---\n\n");
        printf("Enter first Number: ");
        scanf("%d", &a);
        printf("Enter second Number: ");
        scanf("%d", &b); 
        int sum = a + b;
        int sub = a - b;
        int mult = a * b;
        printf("\nResult: \n");
        printf("Addition: %d + %d = %d\n", a, b, sum);
        printf("Subtraction: %d - %d = %d\n", a, b, sub);
        printf("Multiplication: %d * %d = %d\n", a, b, mult);
        
        if(b != 0) {
            int div = a / b;
            printf("Division: %d / %d = %d\n", a, b, div);
        } else {
            printf("Division: Cannot divide by zero!\n");
        }

    }

    else {
        printf("\nInvalid Choice! Please Try Again.\n\n");
    }

    printf("\n===================================\n");
    printf("Thank you for using the calculator!\n");
    printf("===================================\n");

    return 0;

}