#include <stdio.h>

int main() {
    int choice;
    char exit_choice;

    do {
        printf("\n===============================\n");
        printf("       geometry calculator\n");
        printf("===============================\n");
        printf("1. area of circle\n");
        printf("2. area of square\n");
        printf("3. volume of cube\n");
        printf("4. simple calculator\n");
        printf("===============================\n");

        printf("enter your choice 1-4: ");
        scanf("%d", &choice);

        if (choice == 1) {
            float radius;
            printf("\n--- circle area calculator ---\n\n");
            printf("enter radius of circle: ");
            scanf("%f", &radius);

            float area = 3.1416 * radius * radius;
            printf("area of circle: %.2f square units\n", area);
        }

        else if (choice == 2) {
            int side;
            printf("\n--- square area calculator ---\n\n");
            printf("enter side of square: ");
            scanf("%d", &side);

            int area = side * side;
            printf("area of square: %d square units\n", area);
        }

        else if (choice == 3) {
            int h, w, d;
            printf("\n--- cube volume calculator ---\n\n");
            printf("enter height: ");
            scanf("%d", &h);
            printf("enter width: ");
            scanf("%d", &w);
            printf("enter depth: ");
            scanf("%d", &d);

            int volume = h * w * d;
            printf("volume of cube: %d cubic units\n", volume);
        }

        else if (choice == 4) {
            int a, b;
            printf("\n--- simple calculator ---\n\n");
            printf("enter first number: ");
            scanf("%d", &a);
            printf("enter second number: ");
            scanf("%d", &b);

            int sum = a + b;
            int sub = a - b;
            int mult = a * b;

            printf("\nresult: \n");
            printf("addition: %d + %d = %d\n", a, b, sum);
            printf("subtraction: %d - %d = %d\n", a, b, sub);
            printf("multiplication: %d * %d = %d\n", a, b, mult);
        }

        else {
            printf("\ninvalid choice! please enter between 1-4.\n");
        }

        printf("\ndo you want to continue? (y/n): ");
        scanf(" %c", &exit_choice);

    } while (exit_choice == 'y' || exit_choice == 'Y');

    printf("\n=====================================\n");
    printf("\nThank you for using this Calculuter!\n");
    printf("\n=====================================\n");

    return 0;
}
