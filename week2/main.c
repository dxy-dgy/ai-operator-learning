#include <stdio.h>
#include <stdlib.h>
/*定义结构体*/
struct Student{
    long int id;
    char gender;
    int age;
    double score;
};
int main(){
    /*声明变量*/
    struct Student s1;
    /*赋值*/
    s1.id = 23210180086;
    s1.gender = 'M';
    s1.age = 20;
    s1.score = 88.5;
    /*打印输出*/
    printf("Student Information:\n");
    printf("ID: %ld\n", s1.id);
    printf("Gender: %c\n", s1.gender);
    printf("Age: %d\n", s1.age);
    printf("Score: %.1f\n", s1.score);  
    return 0;
}