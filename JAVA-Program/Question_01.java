import java.util.*;
import java.lang.*;

class Question_01
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number of elements : ");
		int n = sc.nextInt();
		System.out.println("-------------------------");
		int[] array1 = new int[n];
		int[] array2 = new int[n];
		
		for(int i=0;i<n;i++)
		{
			System.out.print("Enter ["+(i+1)+"] element : ");
			array1[i]= sc.nextInt();
		}
		System.out.println("-------------------------");
		System.out.println("Array elements are as follows : \n---------------------------");
		for(int i=0;i<n;i++)
		{
			System.out.print(array1[i]+" --> ");
		}
		
		//------------Deletion operation --------------

		int ch = 1;
		int j = 0; 
		while(ch == 1)
		{   
			if(j > n-1)
			{   
				System.out.print("\n------------------------------------------------\n");
				System.out.print("Deletion not possible....");
				System.exit(0);
			}
			else
			{
			System.out.print("\n--------------------------------------------------");
			System.out.print("\nEnter the ["+(j+1)+"] element to delete : ");
			int key = sc.nextInt();
			for(int i=0;i<n;i++)
			 {
			 if( key == array1[i])
			   	{
				 array2[j]= key;
				 continue;
			   	}
			 }
	
		//------- print the resultant array ------
			
			System.out.println("\n------------------------------");
			System.out.println("After deletion the array is :\n----------------------");
			for(int i=0; i<n ; i++)
			{
				int flag = 0;
				for(int j1=0;j1<array2.length;j1++)
				{
					if( array1[i] == array2[j1] )
					{
					 	flag = 1;
					}
				}
				if(flag == 0)
				{
					System.out.println(array1[i]);
				}
			 }
			
		//---------------------------------------------
		j++;
		System.out.println("\n------------------------------------------------");
		System.out.print("Press [0] Exit || [1] Continue : ");
		ch = sc.nextInt();
	  }
	}
	System.out.println("\n--------------[ END ]------------------");
	}
}

/*-------------------[ OUTPUT ]--------------------

jeet@jeet-HP-Notebook:~/Desktop/java_program/App/src$ javac Programming_Question_1.java
jeet@jeet-HP-Notebook:~/Desktop/java_program/App/src$ java Programming_Question_1

Enter number of elements : 4
-------------------------
Enter [1] element : 105
Enter [2] element : 25
Enter [3] element : 89
Enter [4] element : 114
-------------------------
Array elements are as follows : 
---------------------------
105 --> 25 --> 89 --> 114 --> 
--------------------------------------------------
Enter the [1] element to delete : 89

------------------------------
After deletion the array is :
----------------------
105
25
114

------------------------------------------------
Press [0] Exit || [1] Continue : 1

--------------------------------------------------
Enter the [2] element to delete : 105

------------------------------
After deletion the array is :
----------------------
25
114

------------------------------------------------
Press [0] Exit || [1] Continue : 1

--------------------------------------------------
Enter the [3] element to delete : 114

------------------------------
After deletion the array is :
----------------------
25

------------------------------------------------
Press [0] Exit || [1] Continue : 1

--------------------------------------------------
Enter the [4] element to delete : 25

------------------------------
After deletion the array is :
----------------------

------------------------------------------------
Press [0] Exit || [1] Continue : 0

--------------[ END ]------------------

jeet@jeet-HP-Notebook:~/Desktop/java_program/App/src$ 

-----------------------------------------------------*/




