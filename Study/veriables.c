#include <stdio.h>

int main(){

    int x; //decleration
    x = 123; //initialization 
    int y = 321;

    int age = 21;
    float gpa = 2.05;
    char grade = 'C'; // single character
    char name[] = "Bro"; // array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);

    return 0;
}
