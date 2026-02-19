#include <stdio.h>

int main() {
  float sub1, sub2, sub3, sub4, sub5, total, percentage;
  
  printf("\n marks of the sub1 is:");
  scanf("%f", &sub1);
  while (sub1<0 || sub1>100)
  {
  printf("enter the valid marks");
  scanf("%f", &sub1);
  }
  
  printf("\n marks of the sub2 is:");
  scanf("%f", &sub2);
  while (sub2<0 || sub2>100)
  {
  printf("enter the valid marks");
  scanf("%f", &sub2);
  }
  
  printf("\n marks of the sub3 is:");
  scanf("%f", &sub3);
  while (sub3<0 || sub3>100)
  {
  printf("enter the valid marks");
  scanf("%f", &sub3);
  }
  printf("\n marks of the sub4 is:");
  scanf("%f", &sub4);
  while (sub4<0 || sub4>100)
  {
  printf("enter the valid marks");
  scanf("%f", &sub4);
  }
  printf("\n marks of the sub5 bis:");
  scanf("%f", &sub5);
  while (sub5<0 || sub5>100)
  {
  printf("enter the valid marks");
  scanf("%f", &sub5);
  }
  
  total = sub1 + sub2 + sub3 + sub4 + sub5;
  percentage = (total*100)/500;
  
  printf("\n total marks=%f\n", total);
  printf("percentage = %f\n", percentage);
  
  if (percentage>=90 && percentage<=100) {
  printf("grade A");
  }
  else if (percentage>=75 && percentage<90) {
  printf("grade B");
  }
  else if (percentage>=60 && percentage<75) {
  printf("grade C");
  }
  else if (percentage>=45 && percentage<60) {
  printf("grade D");
  }
  else if (percentage>=0 && percentage<45) {
  printf("Fail");
  }
  
  return 0;
  }
