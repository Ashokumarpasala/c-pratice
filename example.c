#include <stdio.h>
// #include <math.h>

int main() {

    // char name[] = "Ashok kumar";
    // char DOB[] = "25-05-1999";
    // char phNumber[] = "999-99999911";
    // printf("Name : %s\n", name);
    // printf("DOB : %s\n", DOB);
    // printf("phone Number : %s", phNumber);
    // int num;
    // printf("Enter number : ");
    // scanf("%d", &num);

    // printf("Result number %d", num);

    // //character reverse print
//     char word1 = 'A';
//     char word2 = 'B';
//     char word3 = 'C';
//     printf("Char Reverse is : %c, %c, %c ", word3, word2, word1);
    
    // //calculate the area and perimeter of a cricle
    // float radius;
    // printf("Enter the Radius of the cricle : ");
    // scanf("%f", &radius);
    // float areaOfCricle = 3.14*radius*radius;
    // float perimeterOfCricle = 2*3.14*radius;
    // printf("Area of Cricle is %f\n", areaOfCricle);
    // printf("perimeter of Cricle is %f\n", perimeterOfCricle);

    // //7. Write a C program to display multiple variables.
    // int a = 125;
    // int b = 12345;
    // long ax = 1234567890;
    // short s = 4043;
    // float x = 2.13459;
    // double dx = 1.1415927;
    // char c = 'W';
    // printf("a + c =  %d\n", a + c);
    // printf("x + c = %f\n", x + c);
    // printf("dx + x = %f\n", dx + x);
    // printf("((int) dx) + ax =  %ld\n", ((int) dx) + ax);
    // printf("a + x = %f\n", a + x);
    // printf("s + b =  %d\n", s + b);
    // printf("ax + b = %ld\n", ax + b);
    // printf("s + c =  %hd\n", s + c);
    // printf("ax + c = %ld\n", ax + c);

    // // 8. Write a C program to convert specified days into years, weeks and days.
    //  int numOfDays;
    //  printf("Enter num of days you want : ");
    //  scanf("%d\n", &numOfDays);
    // float years = numOfDays/365;
    // float weeks = (numOfDays % 365)/7;
    // printf("Years : %.f\n", years);
    // printf("weeks : %.f", weeks);
    
    // //13. Write a C program that accepts three integers and finds the maximum of three.
    //  int num1 = 5000;
    //  int num2 = 6000;
    //  int num3 = 9580;
    //  int initalNum = num1
    // int highestNum =  initalNum <= num2 ? num2 <= num3 ? num3 : num2 : initalNum;
    //  printf("highNum : %d", highestNum); 
     
    // //  14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
    // int totalDist;
    // float fuel;
    // printf("Enter Distance Travelled : ");
    // scanf("%d", &totalDist);
    // printf("Enter fuel consumed : ");
    // scanf("%f", &fuel);
    // printf("Average consumption in km/lts : %.2f", totalDist/fuel);
     
    // //  15. Write a C program to calculate the distance between two points.
    // int x1;
    // int x2;
    // int y1;
    // int y2;
    // printf("Enter x1 : ");
    // scanf("%d", &x1);
    //  printf("Enter x2 : ");
    // scanf("%d", &x2);
    //  printf("Enter y1 : ");
    // scanf("%d", &y1);
    //  printf("Enter y2 : ");
    // scanf("%d", &y2);
    // int innerResult = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    // float center = sqrt(innerResult);
    // printf("center between points : %.2f", center);
    
    // 16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
    int money;
    printf("enter amount : ");
    scanf("%d", &money);

    int hunders = money/100;


    printf("%d hundered notes\n", hunders);

    int fifties = (money-(hunders*100));
    int fiftiesMoney = fifties/50;

    printf("%d fifties notes\n", fiftiesMoney);

    int tewnties = (fifties-(fiftiesMoney*50))/20;

    printf("%d twenties notes", tewnties);


    return 0;
}
