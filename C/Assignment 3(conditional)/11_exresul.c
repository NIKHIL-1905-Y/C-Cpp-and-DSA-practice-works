// 11.
//	Write a program to take marks of 5 subjects from the user.
// Assume marks are given out of 100 and passing marks is 33.
 //Now display whether the candidate passed the examination or failed.
 #include <stdio.h>
 int main()
 {
    int p,c,m,e,h;
    printf("Enter the marks of Five subjects\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&e,&h);
    
   if(p>=33&&c>=33&&m>=33&&e>=33&&h>=33)
   {
    printf("the student passed the examination");

   }
   else{
    printf("the student failed the examination ");
   }
   return 0;


 }