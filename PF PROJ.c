#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct date
{
	int day;
	int month;
	int year;
};

struct ItemDetail
{
	int itemCode;
	char itemName[25];
	float price;
	int quantity;
	struct date d;	
};

void Delay(long int interval)
{
	int i = 0;
	for(i = 0; i < interval*1000; i++);
}

void Title()
{
	int i;
	
	printf("\n");
	printf("\n\n");
    printf(" \t\t\t   %c", 201);   //print left top corner
	
	for(i = 0; i < 20; i++)
	{
		printf("%c", 205);
		Delay(10000);
	}
	
	printf("%c\n", 187);//print top right corner
	printf(" \t\t\t   %c    MHH WAREHOUSE", 186);//print vertical borders
	printf("   %c\n", 186);
	printf("\t\t\t   %c", 200);//print bottom left corner
	
	for(i = 0; i < 20; i++)
	{
		printf("%c", 205);
		Delay(10000);
	}
	
	printf("%c\n", 188);
	
	for(i = 0; i < 4; i++ )
	{
		printf("\n");
	}
}

int Password(char str[])
{
	int res;
	int r1;
	int r2;
	char str1[15], str2[15];	
	FILE *ptr1, *ptr2;
	ptr1 = fopen("manager.txt", "r");
	ptr2 = fopen("employee.txt", "r");
	if(ptr1 == NULL || ptr2 == NULL)
	{
		printf("\n\t\t\tAn unexpected error occured.");
		getchar();
		exit(1);
	}
	fscanf(ptr1, "%[^\n]", str1);
	fscanf(ptr2, "%[^\n]", str2);
	
	r1 = strcmp(str, str1);
	r2 = strcmp(str, str2);
	
	if (r1 == 0)
	{
		res = 1;
	}
	else if (r2 == 0)
	{
		res = 2;
	}
	else
	{
		res = 0;
	}
	
	return res;
}

void Arrow(int i,int j)
{
	if(i == j)
	{
		printf("\t\t    ==>");
	}
	else
	{
		printf("\t\t      ");
	}
}

int MainMenu1()
{
	system("cls");
	int i = 0;
	
	Title();
	
	int position = 1;
	int keyPress = 0;
	#define MAX 5
	#define MIN 1
	while(keyPress != 13)
	{   
		system("cls");
		printf("\n");
		printf("\n\n");
	    printf(" \t\t\t   %c", 201);   //print left top corner
		
		for(i = 0; i < 20; i++)
		{
			printf("%c", 205);
		}
		
		printf("%c\n", 187);//print top right corner
		printf(" \t\t\t   %c    MHH WAREHOUSE",186);//print vertical borders
		printf("   %c\n", 186);
		printf("\t\t\t   %c", 200);//print bottom left corner
		
		for(i = 0; i < 20; i++)
		{
			printf("%c", 205);
		}
		
		printf("%c\n", 188);
		
		for(i = 0; i < 4; i++ )
		{
			printf("\n");
		}

		printf("\t\t ------------------------------------------\n");
		Arrow(1,position);
		printf("\t\t   Display Data                 \n");
		Arrow(2,position);
		printf("\t\t  Search an item                \n");
		Arrow(3,position);
		printf("\t\tChange your password            \n");
		Arrow(4,position);
		printf("\t\t       Exit                     \n");
		Arrow(5,position);
		printf("\t\tReturn to login page            \n");
		printf("\t\t ------------------------------------------");
		
		keyPress=getch();
		
		if(keyPress == 80 && position != MAX)
		{
			position++;	
		}
		else if(keyPress == 72 && position != MIN)
		{
			position--;
		}
		else
		{
			position=position;
		}
	}
	
	return position;
}

int MainMenu2()
{
	system("cls");
	int i = 0;
	
	Title();
	
	int position = 1;
	int keyPress = 0;
	#define MAX1 8
	#define MIN1 1
	while(keyPress != 13)
	{   
		system("cls");
		printf("\n");
		printf("\n\n");
	    printf(" \t\t\t   %c", 201);   //print left top corner
		
		for(i = 0; i < 20; i++)
		{
			printf("%c", 205);
		}
		
		printf("%c\n", 187);//print top right corner
		printf(" \t\t\t   %c    MHH WAREHOUSE",186);//print vertical borders
		printf("   %c\n", 186);
		printf("\t\t\t   %c", 200);//print bottom left corner
		
		for(i = 0; i < 20; i++)
		{
			printf("%c", 205);
		}
		
		printf("%c\n", 188);
		
		for(i = 0; i < 4; i++ )
		{
			printf("\n");
		}

		printf("\t\t ------------------------------------------\n");
		Arrow(1,position);
		printf("\t\t   Add any item                 \n");
		Arrow(2,position);
		printf("\t\t   Display Data                 \n");
		Arrow(3,position);
		printf("\t\t  Delete an item                \n");
		Arrow(4,position);
		printf("\t\t  Update an item                \n");
		Arrow(5,position);
		printf("\t\t  Search an item                \n");
		Arrow(6,position);
		printf("\t\tChange your password            \n");
		Arrow(7,position);
		printf("\t\t       Exit                     \n");
		Arrow(8,position);
		printf("\t\tReturn to login page            \n");
		printf("\t\t ------------------------------------------");
		
		keyPress=getch();
		
		if(keyPress == 80 && position != MAX1)
		{
			position++;	
		}
		else if(keyPress == 72 && position != MIN1)
		{
			position--;
		}
		else
		{
			position=position;
		}
	}
	
	return position;
}

void ExitScreen()
{
	system("cls");
	system("color F0");
	int i;
	Title();
	 
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                Thanks                  |");
	printf("\n\t\t |                 for                    |");
	printf("\n\t\t |               visiting!                |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t ------------------------------------------");
	
	for(i = 0; i < 4; i++ )
	{
		printf("\n");
	}
	
	getch();
	
}

void AddDetails()
{
	struct ItemDetail item;
	int index, valid;
	char c;
	int a=0;

	FILE *ptr;
	
	do
	{
		system("cls");
		printf("\n\t\t============ Enter Product Detail ============");
		int ID; //for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		ptr = fopen("mhh.txt","a+");//opening file and creating a staff.txt file to append or write
		
		if(ptr != NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\n\nProduct Code = ");
			scanf("%d", &ID);
            while(fscanf(ptr,"%d %s %f %d %d/%d/%d", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year) != EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == item.itemCode)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			item.itemCode = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t = ");
			scanf("%d",&item.itemCode);
		}
		
	//add product name
		do
		{
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nProduct Name = ");
			gets(item.itemName); // get input string
			item.itemName[0]=toupper(item.itemName[0]);
			//iterate for every character in string
			for (index=0; index<strlen(item.itemName); ++index)
			{	//check if character is valid or not
				if(isalpha(item.itemName[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again.");
				getch();
			
				
			}
		
		}while(!valid);
		
		//productid
		do
		{
			printf("\nPrice = ");
			scanf("%f",&item.price);
		}while(!valid);
			
		do
		{
			printf("\nQuantity = ");
			scanf("%i",&item.quantity);	
		}while(!valid);
		
		do
		{
			printf("\nDate in format dd/mm/yyyy = ");
			scanf("%d/%d/%d", &item.d.day, &item.d.month, &item.d.year);	
		}while(!valid);
	
		ptr = fopen("mhh.txt","a");
		fprintf(ptr, "\n%d %s %.2f %d %d/%d/%d", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
		fclose(ptr);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu.");
	}	while((c = getch()) =='\r');
}	

void DisplayDetails()
{
	system("cls");
	FILE *ptr;
	ptr = fopen("mhh.txt", "r+");
	int num=0;
	struct ItemDetail item;
	
	Title();
	
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		getchar();
		ExitScreen();
		exit(0);
	}
	
	printf("\t================================================================\n");
    printf("\tItem Code\tItem Name\tPrice\tQuantity\tDate\n");
    printf("\t================================================================\n");
	do 
	{
		fscanf(ptr,"%d %s %f %d %d/%d/%d", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year);
		//fetching each item details
		num++; //one record read increase counter by 1
		printf("\t%d\t\t%s\t\t%.2f\t%d\t\t%d/%d/%d\n", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
		//printing each item details
	} while( !feof(ptr) );  //end of loop
	
	printf("\n\n\t\t\tTotal Number of Records are %d\n", num);
	printf("\t\t\t  Press any key to return");
	getch();
} //function ends

void SearchItem()
{
	system("cls");
	FILE *ptr;
	int itemCode;
	struct ItemDetail item;
	
	Title();
	
	ptr = fopen("mhh.txt", "r+");
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		ExitScreen();
		exit(0);
	}

	
	printf("Enter the item code you want to display on the screen: ");
	scanf("%d", &itemCode);
	
	system("cls");
	Title();
	
	printf("\t================================================================\n");
    printf("\tItem Code\tItem Name\tPrice\tQuantity\tDate\n");
    printf("\t================================================================\n");
	do
	{
		fscanf(ptr,"%d %s %f %d %d/%d/%d", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year);
		//fetching each item details
		if (itemCode == item.itemCode)//checking for required item details
		{
			printf("\t%d\t\t%s\t\t%.2f\t%d\t\t%d/%d/%d\n", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
			//printing each item details
			printf("\n\t\t\t  Press any key to return");
			getch();
			return; //ending function	
		}//if body ends
		
	}while(!feof(ptr)); // while loop ends
	printf("\t\t\tItem with item code (%d) is not found", itemCode);//message if record not found
	printf("\t\t\t  Press any key to return");
	getch();
} // function ends

void UpdateDetails()
{
	system("cls");
	FILE *ptr;
	int itemCode, count = 0;
	struct ItemDetail item;
	
	Title();
	
	ptr = fopen("mhh.txt", "r+");
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		ExitScreen();
		exit(0);
	}
	
	I:
	printf("Enter the item code you want to update: ");
	scanf("%d", &itemCode);
    while((fscanf(ptr,"%d %s %f %d %d/%d/%d", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year)) != EOF)
	{
		/*
		fscanf reads every data stored in the file
		if entered ID exists then count becomes 1 else remains 0
		*/
		if(itemCode == item.itemCode)
		{
			count = 1;	
		}
	}
	
	if (count == 0)
	{
		printf("\n\tTHE PRODUCT CODE DOES'NT EXIST.\n\n");
		goto I;
	}
	
	system("cls");
	Title();

	FILE *ftemp; //new file pointer
	ftemp = fopen("temp.temp","w");
	if (ftemp == NULL)
	{
	printf("\n\n\t\t\tTEMP FILE CANNOT BE CREATED!!");
	return; //ending function
	} //if body ends
	
	rewind(ptr);
	
	do {
	fscanf(ptr,"%d %s %f %d %d/%d/%d\n", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year);
	
	if (itemCode != item.itemCode)
	{
	fprintf(ftemp,"%d %s %.2f %d %d/%d/%d \n", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
	//printing each item details
	}
	else
	{
		fflush(stdin);
		printf("Enter Item name = ");
		gets(item.itemName);
		fflush(stdin);
		printf("Enter Price = ");
		scanf("%f", &item.price);
		fflush(stdin);
		printf("Enter Qantity = ");
		scanf("%d", &item.quantity);
		fflush(stdin);
		printf("Enter Date in format dd/mm/yyyy = ");
		scanf("%d/%d/%d", &item.d.day, &item.d.month, &item.d.year);
		fflush(stdin);
		fprintf(ftemp,"%d %s %.2f %d %d/%d/%d \n", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
	}
	}while(!feof(ptr)); //end of while loop
	fclose(ptr);
	fclose(ftemp);
	remove("mhh.txt");
	rename("temp.temp","mhh.txt");
	printf("\n\n\n\t\t Record Updated! Press any key to continue");
	getch();
}

void DelItem()
{
	system("cls");
	FILE *ptr;
	int itemCode;
	struct ItemDetail item;
	
	Title();
	
	ptr = fopen("mhh.txt", "r+");
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		ExitScreen();
		exit(0);
	}

	printf("Enter the item code you want to delete: ");
	scanf("%d", &itemCode);
	
	system("cls");
	Title();

	FILE *ftemp; //new file pointer
	ftemp = fopen("temp.temp","w");
	if (ftemp == NULL)
	{
	printf("\n\n\t\t\tTEMP FILE CANNOT BE CREATED!!");
	return; //ending function
	} //if body ends
	
	do {
	fscanf(ptr,"%d %s %f %d %d/%d/%d\n", &item.itemCode, item.itemName, &item.price, &item.quantity, &item.d.day, &item.d.month, &item.d.year);
	
	//fetching each item details
	if (itemCode != item.itemCode)//skip printing item that should be delete
	{
	fprintf(ftemp,"%d %s %.2f %d %d/%d/%d \n", item.itemCode, item.itemName, item.price, item.quantity, item.d.day, item.d.month, item.d.year);
	//printing each item details
	}//if body ends
	}while(!feof(ptr)); //end of while loop
	fclose(ptr);
	fclose(ftemp);
	remove("mhh.txt");
	rename("temp.temp","mhh.txt");
	printf("\n\n\n\t\t Record Deleted! Press any key to continue");
	getch();
}

void UpdatePass1()
{
	system("cls");
	FILE *ptr;
	int i = 0, index = 0;
	char pass1[15], pass2[15], pass[15], ch;
	int password;
		
	Title();
	
	ptr = fopen("manager.txt", "r+");
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		ExitScreen();
		exit(0);
	}
	
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t |       Enter your password for          |");
	printf("\n\t\t |       deleting and renewing it         |");
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t\t\t ");
	while((ch = getch()) != 13){
       if(index < 0)
           index = 0;
       // 8 is ASCII value of BACKSPACE character
       if(ch == 8){
           putch('\b');
           putch('\0');
           putch('\b');
           index--;
       continue;
       }
       pass1[index++] = ch;
       putch('*');
   }
   pass1[index] = '\0';
   password = Password(pass1);
   
   if(password == 1)
   {
		system("cls");
		Title();
		
		fflush(stdin);
		index = 0;
		printf("Enter New Password = ");
		while((ch = getch()) != 13)
		{
        	if(index < 0)
           		index = 0;
        	// 8 is ASCII value of BACKSPACE character
        	if(ch == 8)
			{
                putch('\b');
				putch('\0');
				putch('\b');
				index--;
        		continue;
        	}
        	pass2[index++] = ch;
			putch('*');
    	}
    	
    	pass2[index] = '\0';
    	strcpy(pass, pass2);
    	
    	fputs(pass, ptr);
    	
		fclose(ptr);
		printf("\n\n\n\t\t Password Updated! Press any key to continue.");
		getch();		
   }
   else
   {
		printf("\n\n\t\t\t Password you entered is wrong.");
		getchar();
		ExitScreen();
		fclose(ptr);
		exit(0);
   }
	
}

void UpdatePass2()
{
	system("cls");
	FILE *ptr;
	int i = 0, index = 0;
	char pass1[15], pass2[15], pass[15], ch;
	int password;
		
	Title();
	
	ptr = fopen("employee.txt", "r+");
	if(ptr == NULL)
	{
		printf("\t\t\tFile doesn't exist.");
		ExitScreen();
		exit(0);
	}
	
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t |       Enter your password for          |");
	printf("\n\t\t |       deleting and renewing it         |");
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t\t\t ");
	while((ch = getch()) != 13){
       if(index < 0)
           index = 0;
       // 8 is ASCII value of BACKSPACE character
       if(ch == 8){
           putch('\b');
           putch('\0');
           putch('\b');
           index--;
       continue;
       }
       pass1[index++] = ch;
       putch('*');
   }
   pass1[index] = '\0';
   password = Password(pass1);
   
   if(password == 2)
   {
		system("cls");
		Title();
		
		fflush(stdin);
		index = 0;
		printf("Enter New Password = ");
		while((ch = getch()) != 13)
		{
        	if(index < 0)
           		index = 0;
        	// 8 is ASCII value of BACKSPACE character
        	if(ch == 8)
			{
                putch('\b');
				putch('\0');
				putch('\b');
				index--;
        		continue;
        	}
        	pass2[index++] = ch;
			putch('*');
    	}
    	
    	pass2[index] = '\0';
    	strcpy(pass, pass2);
    	
    	fputs(pass, ptr);
    	
		fclose(ptr);
		printf("\n\n\n\t\t Password Updated! Press any key to continue.");
		getch();		
   }
   else
   {
		printf("\n\n\t\t\t Password you entered is wrong.");
		getchar();
		ExitScreen();
		fclose(ptr);
		exit(0);
   }
	
}

void Employee()
{
	int choice;
	choice = MainMenu2();
	switch(choice)
	{
		case 1:
			AddDetails();
			Employee();
			break;
			
		case 2:
			DisplayDetails();
			Employee();
			break;
			
		case 3:
			DelItem();
			Employee();
			break;
			
		case 4:
			UpdateDetails();
			Employee();
			break;	
		
		case 5:
			SearchItem();
			Employee();
			break;		
			
		case 6:
			UpdatePass2();
			Employee();
			break;	
			
		case 7:
			ExitScreen();
			exit(0);
			break;
			
		case 8:
			main();
			break;	
	}
}

void Manager()
{
	int choice;
	choice = MainMenu1();
	switch(choice)
	{
		case 1:
			DisplayDetails();
			Manager();
			break;
			
		case 2:
			SearchItem();
			Manager();
			break;		
		
		case 3:
			UpdatePass1();
			Manager();
			break;	
				
		case 4:
			ExitScreen();
			exit(0);
			break;	
			
		case 5:
			main();
			break;	
	}
}

void Retry()
{
	system("cls");
	int i = 0, index = 0;
	char ch, repass[15] = {'\0'};
	int password;
	
	Title();
	
	printf("\n\t\t       You entered a wrong password."); 
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |         Re-enter your password         |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t\t\t ");
	while((ch = getch()) != 13){
       if(index < 0)
           index = 0;
       // 8 is ASCII value of BACKSPACE character
       if(ch == 8){
           putch('\b');
           putch('\0');
           putch('\b');
           index--;
       continue;
       }
       repass[index++] = ch;
       putch('*');
   }
   repass[index] = '\0';
   password = Password(repass);
   if(password == 2)
   {
		Employee();
   }
   else if(password == 1)
   {
		Manager();
   }
   else
   {
		printf("\n\t\t    You entered a wrong password again.");	
		printf("\n\t\t        System is being closed now.    ");
		for(i = 0; i < 4; i++ )
		{	
			printf("\n");
		}	
		getch();
		exit(0);
   }
}

int main()
{
	system("cls");
	int i = 0, index = 0;
	char pass[15], ch;
	int password;
	
	Title();
	 
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t |                                        |");
	printf("\n\t\t |          Enter your password           |");
	printf("\n\t\t |                                        |");
	printf("\n\t\t ------------------------------------------");
	printf("\n\t\t\t\t ");
	while((ch = getch()) != 13){
       if(index < 0)
           index = 0;
       // 8 is ASCII value of BACKSPACE character
       if(ch == 8){
           putch('\b');
           putch('\0');
           putch('\b');
           index--;
       continue;
       }
       pass[index++] = ch;
       putch('*');
   }
   pass[index] = '\0';
   password = Password(pass);
   
   if(password == 2)
   {
		Employee();
   }
   else if(password == 1)
   {
		Manager();
   }
   else
   {
		Retry();	
   }
}

