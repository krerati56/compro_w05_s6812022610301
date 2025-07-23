#include <stdio.h>

int main() {
    char name[30];       // ชื่อ
    int age;             // อายุ
    float height;        // ส่วนสูง
    char subject;        // รหัสวิชา เช่น M
    float grade;         // เกรด เช่น 3.5
    char gradechar;      // ตัวอักษรแทนเกรด เช่น A

    printf("Enter your name, age, height, subject, grade, gradechar: ");
    scanf("%s %d %f %c %f %c", name, &age, &height, &subject, &grade, &gradechar);

    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, grade %.2f which is symbolized as '%c'.\n", subject, grade, gradechar);

    return 0;
}
