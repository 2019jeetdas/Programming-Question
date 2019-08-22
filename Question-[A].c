/*------- Question-[A] : Program for create student record -----*/


#include<stdio.h>
#include<string.h>

struct student
   {
    struct 
     {
      char fname[20];
      char mname[10];
      char lname[10];
     }name;
    int roll_no;
    int marks_obtained;
   }arr[10];

int main()
  {
   int n;
   
   printf("\nEnter no. of students : ");
   scanf("%d",&n);
   printf("----------------------------\n");
   printf("for NIL value enter 'N'\n");
   printf("----------------------------\n");
   for(int i=0;i<n;i++)
	{
	 printf("Enter first name : ");
         scanf("%s",arr[i].name.fname);
         
	 printf("Enter middle name : ");
         scanf("%s",arr[i].name.mname);
         
	 printf("Enter last name : ");
         scanf("%s",arr[i].name.lname);

         printf("Enter roll : ");
	 scanf("%d",&arr[i].roll_no );
	 
  	 printf("Marks obtained : ");
  	 scanf("%d",&arr[i].marks_obtained);
	 printf("----------------------------\n");
        }

   printf("\n----- Entered records are -------\n\n");
   for(int i=0;i<n;i++)
	{
        
         //------------- last name operation -----------------
         if(strcmp("N",arr[i].name.lname) == 0)
            {
	     if(strcmp("N",arr[i].name.mname) == 0) 
              {
		printf("\nName  : %s ",arr[i].name.fname);
	      }
             else
              {
	     printf("\nName  : %s %s",arr[i].name.fname,arr[i].name.mname);
	     }
            }
           //--------------middle name operation ---------------
          else if(strcmp("N",arr[i].name.mname) == 0)
            {
	     if(strcmp("N",arr[i].name.lname) == 0) 
              {
		printf("\nName  : %s ",arr[i].name.fname);
	      }
             else
              {
	     printf("\nName  : %s %s",arr[i].name.fname,arr[i].name.lname);
	     }
            }
           //------------not null operation --------------------
          else
           {
            printf("\nName  : %s %s %s",arr[i].name.fname,arr[i].name.mname,arr[i].name.lname);
           }
         printf("\nRoll  : %d",arr[i].roll_no);
	 printf("\nMarks : %d",arr[i].marks_obtained);
	 printf("\n______________________________________\n");
	}
   return 0;
  }

/* ---------------------- [ OUTput ]--------------------------

jeet@jeet-HP-Notebook:~/Desktop/C_Program$ gcc 2.c
jeet@jeet-HP-Notebook:~/Desktop/C_Program$ ./a.out

Enter no. of students : 4
----------------------------
for NIL value enter 'N'
----------------------------
Enter first name : aaaa
Enter middle name : N
Enter last name : dddd
Enter roll : 1
Marks obtained : 100
----------------------------
Enter first name : bbbb
Enter middle name : kkkk
Enter last name : N
Enter roll : 2
Marks obtained : 200
----------------------------
Enter first name : cccc
Enter middle name : N
Enter last name : N
Enter roll : 3
Marks obtained : 300
----------------------------
Enter first name : eeee
Enter middle name : kkkk
Enter last name : dddd
Enter roll : 4
Marks obtained : 400
----------------------------

----- Entered records are -------


Name  : aaaa dddd
Roll  : 1
Marks : 100
______________________________________

Name  : bbbb kkkk
Roll  : 2
Marks : 200
______________________________________

Name  : cccc 
Roll  : 3
Marks : 300
______________________________________

Name  : eeee kkkk dddd
Roll  : 4
Marks : 400
______________________________________
jeet@jeet-HP-Notebook:~/Desktop/C_Program$ 

----------------------------------------------------------*/



	
