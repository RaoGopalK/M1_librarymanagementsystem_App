 /**
 * @file new_Account.c
 * @author Ankita Nagaraj Kondagoli
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 #include  "bank.h"
 #include  "header.h"

void new_customer()
{ 
      FILE*ff;  
      ff=fopen("customer.txt","a");  
      printf("\n Welcome to Banking Corporation Private Limited.\n Enter your name here :");  
      scanf("%s",&b.name);  
      printf("\n Welcome %s, Enter your account number",b.name);  
      scanf("%d",&b.accno);  
      printf("\n Please mention the initial deposit... Rs: ");  
      scanf("%f",&b.bal);  
      printf("\n Congratulations... Your account has been created.\n To deposit please login as existing customer");  
      fwrite(&b,sizeof(b),1,ff);  
      fclose(ff);  
      getch();  
}
