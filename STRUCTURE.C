#include <stdio.h>
#include <string.h>

// 1. Defining the structure
struct Student {
    char name[50];
    int rollNumber;
    float gpa;
};

int main() {
    // 2. Declaring and Initializing using an Initializer List
    struct Student student1 = {"Alice Smith", 101, 3.85};

    // 3. Declaring and initializing members individually
    struct Student student2;
    // Note: Use strcpy() to assign values to a character array after declaration
    strcpy(student2.name, "Bob Jones"); 
    student2.rollNumber = 102;
    student2.gpa = 3.62;

    // 4. Accessing structure members using the dot (.) operator
    printf("--- Student 1 Details ---\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("GPA: %.2f\n\n", student1.gpa);

    printf("--- Student 2 Details ---\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("GPA: %.2f\n\n", student2.gpa);

    // 5. Direct copying between structures of the same type
    struct Student student3;
    student3 = student1; // Copies all data from student1 to student3

    printf("--- Student 3 (Copied from Student 1) ---\n");
    printf("Name: %s\n", student3.name);
    
    return 0;
}
