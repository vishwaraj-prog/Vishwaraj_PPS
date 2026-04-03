#include<stdio.h>

void display()
{
    printf("\n++++++++++++++++++++++++++++++++++++++\n");
    printf("\n Menu-driven application");
    printf("\n 1. Number is even or odd:");
    printf("\n 2. Number is positive or negative");
    printf("\n 3. Greatest of three number:");
    printf("\n 4. Sum of digit:");
    printf("\n 5. Exit the program:");
    
    printf("\n++++++++++++++++++++++++++++++++++++++\n");
}

 void evenodd() {
 int a;
  printf("\n Enter the value of a:");
  scanf("%d", &a);
  
  if(a % 2 == 0){
      printf("\n Number is even.");
}
  else{
    printf("\n Number is odd.");
    }
}

 void posneg() {
  int a;
  printf("Enter the value of a:");
  scanf("%d", &a);
  
  if(a > 0){
    printf("\n Number is positive");
}
  else if(a < 0){
    printf("\n Number is negative");
}
  else{
   printf("\n Number is Zero");
   }
}

  int Greatest(){
  int a,b,c;
  printf("\n Enter the value of a:");
  scanf("%d", &a);
  printf("\n Enter the value of b:");
  scanf("%d", &b);
  printf("\n Enter the value of c:");
  scanf("%d", &c);
  
  if(a>b && a>c){
   //printf("\n a is greatest number");
   return a;
}
  else if(b>a && b>c){
   //printf("\n b is greatest number");
   return b;
}
  else{
   //printf("\n c is greatest number");
   return c;
  }
}

void sumofdigit(int num){
 int sum = 0, remainder, i;
 printf("Enter the value of number");
 scanf("%d", &num);
 
 for(i=0 ; i>num ; i++){
 remainder = num % 10;
 sum = sum + remainder;
 num = num /10;
 }
 printf("sum of digit = %d", num);
}
  
int main() {
  int choice;
  
  do {
    display();
    printf("\n Enter your choice:");
    scanf("%d", &choice);
    
    switch(choice){
    case 1 :
     evenodd();
     break;
     
    case 2 :
     posneg();
     break;
     
    case 3 :
    int ans=Greatest();
    printf("\n MAX is%d",ans);
     break;
     
    case 4 :
    int num;
     printf("\n Enter the number");
     scanf("%d", &num);
     sumofdigit(num);
     break;
     
    case 5 :
     printf("Exit the program");
     break;
     
    default :
     printf("\n choice is not valid");
    }
}while(choice != 5);

 return 0;
}
