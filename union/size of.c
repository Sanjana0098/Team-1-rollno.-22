#include <stdio.h>

union Data {
    char name[50];
    int age;
    char grade;
};

int main() {
    union Data info;

    // Calculate and display the size of the union
    int unionSize = sizeof(union Data);
    printf("Size of the union is: %d bytes\n", unionSize);

    // Input student's name
    printf("Enter student's name: ");
    scanf("%49s", info.name);  // Use %49s to prevent buffer overflow

    // Input student's age
    printf("Enter student's age: ");
    scanf("%d", &info.age);

    // Input student's grade
    printf("Enter student's grade: ");
    scanf(" %c", &info.grade);  // Notice the space before %c to handle newline

    // Display sizes of individual members
    printf("Size of name: %zu bytes\n", sizeof(info.name));
    printf("Size of age: %zu bytes\n", sizeof(info.age));
    printf("Size of grade: %zu bytes\n", sizeof(info.grade));

    // Display union members (only the most recent value will be valid)
    printf("\nStudent Information:\n");
    printf(" Name: %s (might be corrupted)\n", info.name);
    printf(" Age: %d (might be corrupted)\n", info.age);
    printf(" Grade: %c (this will be correct)\n", info.grade);

    return 0;
}

