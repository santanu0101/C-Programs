#include <stdio.h>

int main() {
    
    int totalSubjects, marks, totalMarks = 0,subjects;

    
    printf("Enter the  number of subjects: ");
    scanf("%d", &subjects);

    
    for (int i = 1; i <= subjects;i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        totalMarks += marks;
    }

    
    float averageMarks = (float)totalMarks / subjects;

    
    printf("The average marks of the student are: %.2f\n", averageMarks);

    return (0);
}