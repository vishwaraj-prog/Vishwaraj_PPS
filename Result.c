#include<stdio.h>
int main(){
  int enroll;
  printf("\n Enter the enrollment number:");
  scanf("%d", &enroll);
  
  char name;
  printf("\n Enter the first ch of name:");
  scanf("%ch", &name);
  
  float CGPA;
  printf("\n Enter your marks:");
  scanf("%f", &CGPA);
  
  double mobile;
  printf("\n Enter your mobile number:");
  scanf("%ld", &mobile);
  
  printf("your enroll : %d", enroll);
  printf("\n your name : %c", name);
  printf("\n your marks : %f", CGPA);
  printf("\n your mobile : %ld", mobile);
  
  return 0;
  }
