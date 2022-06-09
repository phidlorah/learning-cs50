#include <cs50.h>
#include <stdio.h>

int totalmarks(int marks, int points, int score, int grade, int assess);
int averagemarks(int marks, int points, int score, int grade, int assess);

int main(void)

{
    int marks = get_int("mathematics: ");
    int points = get_int("languages: ");
    int score = get_int("sciences: ");
    int grade = get_int("humanities: ");
    int assess = get_int("computer: ");
    int fullmarks = totalmarks(marks, points, score, grade, assess);
    int mean = averagemarks(marks, points, score, grade, assess);
    printf("total marks:%i\n", fullmarks);
    printf("average marks;%i\n", mean);
}

// calculate the total of each subject
int totalmarks(int marks, int points, int score, int grade, int assess)
{
    int totalmarks = marks + points + score + grade + assess;
    return totalmarks;
}

// calculate the average marks
int averagemarks(int marks, int points, int score, int grade, int assess)
{
    int fullmarks = marks + points + score + grade + assess;
    int mean = fullmarks / 5;
    return mean;
}
