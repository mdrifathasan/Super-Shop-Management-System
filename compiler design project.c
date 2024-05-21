#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9


struct item
{
	char productname[40],productcomp[40],c;
	int productid;
	int price;
	int Qnt;
	float a;
	char b[200];
}st;


//function
void wel_come(void);
void login();
void menu(void);

void gotoxy(short x, short y)    //x or y name laibary function create korcee
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void addfoodproduct();
void readfoodproduct();
void searchfoodproduct();  // ekta function call koree food profuct er
void editfoodproduct();       //add,read search,edit and delete funcion er modde rakce
void deletefoodproduct();

void addhouseholdproduct();
void readhouseholdproduct();
void searchhouseholdproduct();         // same
void edithouseholdproduct();
void deletehouseholdproduct();

void addmedicineproduct();
void readmedicineproduct();
void searchmedicineproduct();        //same
void editmedicineproduct();
void deletemedicineproduct();

void restrictedproduct();

void total_bill();
void customardetails();       // ate taa coustomar er bill ,details ect rakce
void totalsell();
void main(void)


{
wel_come();
login();
}



void wel_come(void)

{
    int i;
	time_t t;
	time(&t);
	printf("                                                                                                         \n");
	printf("WELCOME TO\n");
	for(i=0; i<10; i++)
    {
        printf(".");
        Sleep(70);
    }
    printf("\n");
	printf("  OUR Super Shop\n");
	for(i=0; i<31; i++)
    {
        printf(".");
        Sleep(70);
    }
	printf("\n");
	printf("HERE YOU FIND BEST PRODUCT IN OUR SHOP REASONABLE PRICE!!\n");
	for(i=0; i<48; i++)
    {
        printf(".");
        Sleep(70);
    }
		printf("\n");
		printf("\n");

		printf("Current Time : %s",ctime(&t));
		for(i=0; i<40; i++)
    {
        printf(".");
        Sleep(70);
    }
		printf("\n");
		printf("\n");


	printf("\nPress any key to continue....\n");

getch();
system("cls");
}


void login()
{

int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="pass";
    do
{


    printf("\n");
    printf("******************************\n");
    printf("**********  LOG IN  **********\n");
    printf("******************************\n");

    printf("\n");
    printf(" \nUSERNAME:");
	scanf("%s", &uname);
	printf(" \nPASSWORD:");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';

	i=0;

		if(strcmp(uname,"Rifat,Naba")==0 && strcmp(pword,"1234")==0)
	{
	printf("  \n\nYAH!!! LOGIN IS SUCCESSFUL\n");
	for(i=0; i<25; i++)
    {
        printf(".");
        Sleep(70);
    }
    printf("\n\n HELLOW USER (*_*). PLEASE WAIT... \n");
    for(i=0; i<30; i++)
    {
        printf(".");
        Sleep(70);
    }

    printf("\n\n\nPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n  WE ARE SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}

while(a<=2);
	if (a>2)
	{
		printf("\n Sorry you have entered the wrong Username and password for four times!!!");

		getch();

		}
		system("cls");
		menu();
}


void menu(void)
{
    int i;
	int choice;
	system("clss");
	main:
	printf("\n ******Welcome To Our Super shop*****************");
	printf(" \n                                                 );                                                                                        ");
	printf(" \n                                                 );                                                                                          ");
	printf("\n\t\t  Enter [1] To Add Food Product             \n");
	printf("\n\t\t  Enter [2] To View Food Product            \n");
	printf("\n\t\t  Enter [3] To Search Food Product          \n");
	printf("\n\t\t  Enter [4] To Edit Food Product            \n");
	printf("\n\t\t  Enter [5] To Delete Food Product          \n");

	printf("\n\t\t  Enter [6] To Add Household  Product       \n");
	printf("\n\t\t  Enter [7] To View Household Product       \n");
	printf("\n\t\t  Enter [8] To Search Household Product     \n");
	printf("\n\t\t  Enter [9] To Edit Household Product       \n");
	printf("\n\t\t  Enter [10] To Delete Household Product    \n");

	printf("\n\t\t  Enter [11] To Add Medicine Product        \n");
	printf("\n\t\t  Enter [12] To View Medicine Product       \n");
	printf("\n\t\t  Enter [13] To Search Medicine Product     \n");
	printf("\n\t\t  Enter [14] To Edit Medicine Product       \n");
	printf("\n\t\t  Enter [15] To Delete Medicine Product     \n");

	printf("\n\t\t  Enter [16] To View Restricted Product     \n");
	printf("\n\t\t  Enter [17] To Bill                        \n");
	printf("\n\t\t  Enter [18] To Customer Details            \n");
	printf("\n\t\t  Enter [19] To View Total Sell Today       \n");
	printf("\n\t\t  Enter [20] To Exit!                       \n");

	printf("\n\n\t\t Enter your choice[1-20]                    ");


	for(i=0; i<4; i++)
    {
        printf(".");
        Sleep(100);
    }
	scanf("%i", &choice);

	system("cls");

	switch(choice)
	{
		case 1:
			addfoodproduct();
			break;
			case 2:
		readfoodproduct();
			break;

		case 3:
		searchfoodproduct();
			break;

		case 4:
			editfoodproduct();
			break;
			case 5:
			deletefoodproduct();
			break;


			case 6:
                addhouseholdproduct();
                break;
            case 7:
                 readhouseholdproduct();
                 break;
            case 8:
                searchhouseholdproduct();
                break;
            case 9:
                edithouseholdproduct();
                break;
            case 10:
                deletehouseholdproduct();
                break;


                case 11:
                addmedicineproduct();
                break;
            case 12:
                 readmedicineproduct();
                 break;
            case 13:
                searchmedicineproduct();
                break;
            case 14:
                editmedicineproduct();
                break;
            case 15:
                deletemedicineproduct();
                break;


            case 16:
                restrictedproduct();
                break;
		case 17:
			total_bill();
			break;
        case 18:
            customardetails();
            break;
        case 19:
            totalsell();
                break;
		case 20:
		printf("System Exit\n\n");
		printf("Good Bye\n\n");
		printf("Thank You!!\n\n");
		printf("See you next day!!\n\n\n\n\n");
		exit(0);
		break;


		default:
		printf("Invalid Choice! System Exit\n");
			getch();
	}

}

void addfoodproduct()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;


	do
	{
		system("cls");
		printf("****** Enter FOOD PRODUCT Details ******");
		printf("\n");
		printf("\n");
		int ID;
		fp = fopen("food.dat","a+");

		if((fp = fopen("food.dat","a+"))!=NULL)
		{
			I:
			printf("\nProduct Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
			{

				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}

	//add product name
		do
		{


			fflush(stdin);
			printf("\nFood Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();


			}
			}while(!valid);


		//food variation name
			do
		{
			char productcomp[40];
			fflush(stdin);
			printf("\nVariation Name\t :");
			gets(st.productcomp);
			st.productcomp[0]=toupper(st.productcomp[0]);

			for (index=0; index<strlen(st.productcomp); ++index)
			{
				if(isalpha(st.productcomp[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();


			}
		}while(!valid);

		do
			{
				printf("\nPer Kg Price [10-5000]Taka:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);

				do
			{
				printf("\nQuantity [1-500]Kg\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);

		fp=fopen("food.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");

	}
	while((c = getch()) =='\r');
	menu();
}


void searchfoodproduct()
{
	char target[40];
	int found=0;
	FILE *sfile;
	sfile=fopen("food.dat","r");
	printf("\nEnter FOOD name to search:");
	fflush(stdin);
	gets(target);
	target[0]=toupper(target[0]);
	while (!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
		if(strcmp(target, st.productname)==0)
		{
			found=1;
		}
	}

	if(found)
	{
		printf("\n\nRecord found:=");
		printf("\nFood Name\t\t:%s  \nVariation Name\t\t:%s \nPrice Per Kg\t\t:%i \nProduct ID\t\t:%i \nQuantity(kg)\t\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);

	}
	else
		printf("No Record found");
		fclose(sfile);
		printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();

}


// Delete any food have you add to card

void deletefoodproduct(void)
{
	char target[40];
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("food.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n Enter food name to Delete: ");
	fflush(stdin);
	scanf("%s",target);
	target[0]=toupper(target[0]);
	while (fscanf(sfile,"%s %s %i %i %i\n",st.productname,st.productcomp, &st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(strcmp(target,st.productname)==0)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s %s %i %i %i\n", st.productname,st.productcomp, st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n Record not Found");
				getch();
				menu();
			}
			else
			{
				printf("\n Record deleted");
			}
			fclose(sfile);
			fclose(tfile);
			remove("food.dat");
			rename("TempFile.dat","food.dat");

			printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
}



void readfoodproduct()
{
	FILE *f;
	int i, q;
	if((f=fopen("food.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\nPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{

		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("-");

		}
		gotoxy(5,6);
		printf("Food Name");
		gotoxy(25,6);
		printf("Price per Kg");
		gotoxy(40,6);
		printf("Variation Name");
		gotoxy(60,6);
		printf("Product's CODE");
		gotoxy(80,6);
		printf("Quantity(kg)\n");

		for(i=0;i<100;i++)
		{
			//printf("\xdb");
			printf("-");

		}
		q=8;
		while(fscanf(f,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%s",st.productcomp);
			gotoxy(60,q);
			printf("%i",st.productid);
			gotoxy(80,q);
			printf("%i",st.Qnt); //quantity

			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("-");

	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}

void editfoodproduct()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("food.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter food product code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{

				a=1;
				printf("\n\t******Record Found******");
				printf("\nFood Name\t\t\t: %s",st.productname);
				printf("\nFood Variation name\t\t: %s",st.productcomp);
				printf("\nPer kg Price\t\t\t: %i",st.price);
				printf("\nProduct Code\t\t\t: %i",st.productid);
				printf("\nQuantity(kg)\t\t\t:%i",st.Qnt);

				printf("\n\n\t*** New Record ***");
			do
				{

					fflush(stdin);
					printf("\nNew Food Name\t\t\t: ");
					gets(st.productname); // get input string
					st.productname[0]=toupper(st.productname[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productname); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();


					}
				}while(!valid);	//while end here


				//Product Company
				do
				{
					char productcomp[40];
					fflush(stdin);
					printf("\nNew Variation Name\t\t:");
					gets(st.productcomp); // get input string
					st.productcomp[0]=toupper(st.productcomp[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productcomp); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productcomp[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();


					}
				}while(!valid);

					do
			{
				printf("\nNew per Kg Price[10-5000]Taka\t:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);

				printf("\nEnter New Product Code\t\t:");
				scanf("%i",&st.productid);

				do
			{
				printf("\nNew Quantity [1-500]Kg\t\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
				}
			}
			while(st.Qnt<1 || st.Qnt>500);


				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
					printf("\n\nPress any key to go back to Menu.");
				}
			}
			else
			{
				fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
				fflush(stdin);
			}

		}
		if(!a)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("food.dat");
		rename("TempFile.dat","food.dat");
		getch();
	}
	menu();
}

//function for household product
void addhouseholdproduct()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;


	do
	{
		system("cls");
		printf("******Enter HOUSEHOLD PRODUCT Details******\n\n\n");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("household.dat","a+");//opening file and creating a staff.txt file to append or write

		if((fp = fopen("household.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nProduct Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %i %i %i", st.productname, &st.price, &st.productid,&st.Qnt)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t\t:");
			scanf("%i",&st.productid);
		}

	//add product name
		do
		{

			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nHousehold Product Name\t :");
			gets(st.productname);
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();


			}
		}while(!valid);	//while end here



		//productid
		do
			{
				printf("\nPrice[taka]\t:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);

				do
			{
				printf("\nQuantity [Ti]\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);

		fp=fopen("household.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");

	}
	while((c = getch()) =='\r');
	menu();
}
void readhouseholdproduct()
{
	FILE *f;
	int i, q;
	if((f=fopen("household.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{

		gotoxy(0,5);
			for(i=0;i<75;i++)
		{
			printf("-");

		}
		gotoxy(5,6);
		printf("Name");
		gotoxy(25,6);
		printf("Price");
		gotoxy(40,6);

		printf("Product CODE");
		gotoxy(60,6);
		printf(" Quantity(Ti)\n");

		for(i=0;i<75;i++)
		{

			printf("-");

		}
		q=8;
		while(fscanf(f,"%s  %i %i %i\n", st.productname, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%i",st.productid);
			gotoxy(60,q);
			printf("%i",st.Qnt);

			q++;
		}
		printf("\n");
		for(i=0;i<75;i++)
			printf("-");

	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}
void searchhouseholdproduct()
{
	char target[40];
	int found=0;
	FILE *sfile;
	sfile=fopen("household.dat","r");
	printf("\nEnter HOUSEHOLD PRODUCT name to search:");
	fflush(stdin);
	gets(target);
	target[0]=toupper(target[0]);
	while (!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %i %i %i", st.productname,&st.price, &st.productid,&st.Qnt);
		if(strcmp(target, st.productname)==0)
		{
			found=1;
		}
	}

	if(found)
	{
		printf("\n Record found:=");
		printf("\nHousehold product Name\t:%s\nProduct Price\t\t:%i\nProduct ID\t\t:%i\nQuantity[Ti]\t\t:%i", st.productname, st.price, st.productid, st.Qnt);

	}
	else
		printf("No Record found");
		fclose(sfile);
		printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();

}

void edithouseholdproduct()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("household.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter product code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %i %i %i\n", st.productname,&st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{

				a=1;
				printf("\n\t******Record Found******");
				printf("\nName\t\t: %s",st.productname);
				printf("\nPrice\t\t: %i",st.price);
				printf("\nCode\t\t: %i",st.productid);
				printf("\nQuantity\t:%i Ti",st.Qnt);

				printf("\n\n\t*** New Record ***");
			do
				{

					fflush(stdin);
					printf("\nNew Name\t: ");
					gets(st.productname); // get input string
					st.productname[0]=toupper(st.productname[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productname); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();


					}
				}while(!valid);	//while end here

				do
			{
				printf("\nNew Price[Taka]\t:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);



			printf("\nNew Product Code:");
				scanf("%i",&st.productid);



				do
			{
				printf("\nNew Quantity[Ti]:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);


				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %i %i %i\n", st.productname,st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
                    printf("\n\nPress any key to go back to Menu.");
				}
			}
			else
			{
				fprintf(rp,"%s %i %i %i\n", st.productname,st.price, st.productid,st.Qnt);
				fflush(stdin);
			}

		}
		if(!a)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("household.dat");
		rename("TempFile.dat","household.dat");
		getch();
	}
	menu();
}


void deletehouseholdproduct()
{
	char target[40];
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("household.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n Enter household product name to Delete: ");
	fflush(stdin);
	scanf("%s",target);
	target[0]=toupper(target[0]);
	while (fscanf(sfile,"%s %i %i %i\n",st.productname,&st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(strcmp(target,st.productname)==0)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s  %i %i %i\n", st.productname,st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n Record not Found");
				getch();
				menu();
			}
			else
			{
				printf("\n Record deleted");
			}
			fclose(sfile);
			fclose(tfile);
			remove("household.dat");
			rename("TempFile.dat","household.dat");

			printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
}
//medicine product
void addmedicineproduct()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;


	do
	{
		system("cls");

		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("medicine.dat","a+");//opening file and creating a staff.txt file to append or write

		if((fp = fopen("medicine.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nMedicine Id\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s  %i %i %i", st.productname,&st.price, &st.productid,&st.Qnt)!=EOF)
			{

				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}

	//add product name
		do
		{


			fflush(stdin);
			printf("\nMedicine Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getch();


			}
		}while(!valid);	//while end here




		//productid
		do
			{
				printf("\nPrice[Taka]\t :");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);

				do
			{
				printf("\nQuantity[Box]\t :");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);

		fp=fopen("medicine.dat","a");
		fprintf(fp,"\n%s %i %i %i", st.productname,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");

	}
	while((c = getch()) =='\r');
	menu();
}

void readmedicineproduct()
{
	FILE *f;
	int i, q;
	if((f=fopen("medicine.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{

		gotoxy(0,5);
			for(i=0;i<75;i++)
		{
			printf("-");

		}
		gotoxy(5,6);
		printf("Medicine Name");
		gotoxy(25,6);
		printf("Price");
		gotoxy(40,6);
		printf("Medicine id");
		gotoxy(60,6);
		printf("Quantity[Box]\n");


		for(i=0;i<75;i++)
		{

			printf("-");

		}
		q=8;
		while(fscanf(f,"%s %i %i %i\n", st.productname,&st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%i",st.productid);
			gotoxy(60,q);
			printf("%i",st.Qnt);

			q++;
		}
		printf("\n");
		for(i=0;i<75;i++)
			printf("-");

	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}


void searchmedicineproduct()
{
	char target[40];
	int found=0;
	FILE *sfile;
	sfile=fopen("medicine.dat","r");
	printf("\nEnter medicine name to search:");
	fflush(stdin);
	gets(target);
	target[0]=toupper(target[0]);
	while (!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %i %i %i", st.productname,&st.price, &st.productid,&st.Qnt);
		if(strcmp(target, st.productname)==0)
		{
			found=1;
		}
	}

	if(found)
	{
		printf("\nRecord found:=");
		printf("\nMedicine Name\t\t:%s\nPrice\t\t\t:%i \nMedicine ID\t\t:%i \nQuantity\t\t:%i", st.productname,st.price, st.productid, st.Qnt);

	}
	else
		printf("No Record found");
		fclose(sfile);
		printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();

}

void deletemedicineproduct(void)
{
	char target[40];
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("medicine.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n Enter Medicine name to Delete: ");
	fflush(stdin);
	scanf("%s",target);
	target[0]=toupper(target[0]);
	while (fscanf(sfile,"%s %i %i %i\n",st.productname,&st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(strcmp(target,st.productname)==0)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s %i %i %i\n", st.productname,st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n Record not Found");
				getch();
				menu();
			}
			else
			{
				printf("\n Record deleted");
			}
			fclose(sfile);
			fclose(tfile);
			remove("medicine.dat");
			rename("TempFile.dat","medicine.dat");

			printf("\nPress any key to go to Main Menu!");
		while((st.c = getch()) =='\r');
		menu();
}

void editmedicineproduct()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("medicine.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter product code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %i %i %i\n", st.productname,&st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{

				a=1;
				printf("\n******Record Found******");
				printf("\nMedicine Name\t\t: %s",st.productname);
				printf("\nPrice\t\t\t: %i",st.price);
				printf("\nMedicine Id\t\t: %i",st.productid);
				printf("\nQuantity[Box]\t\t:%i",st.Qnt);

				printf("\n\n\t*** New Record ***");
			do
				{

					fflush(stdin);
					printf("\nNew Medicine Name\t: ");
					gets(st.productname);
					st.productname[0]=toupper(st.productname[0]);

					for (index=0; index<strlen(st.productname); ++index)
					{
						if(isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n Name contain invalid character. Please 'Enter' again");
						getch();


					}
				}while(!valid);

					do
			{
				printf("\nNew Price\t\t:");
				scanf("%i",&st.price);
				if(st.price<10 || st.price>5000)
				{
					printf("\n\tYou Cannot Enter the price limit [10-5000].Re-Enter.");
				}
			}while(st.price<10 || st.price>5000);

				printf("\nNew medicine id\t\t:");
				scanf("%i",&st.productid);

				do
			{
				printf("\nNew Quantity [Box]\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt<1 || st.Qnt>500)
				{
					printf("\n\tEnter New Quantity[1-500] only.Re-Enter.");
				}
			}while(st.Qnt<1 || st.Qnt>500);


				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %i %i %i\n", st.productname,st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
					printf("\n\nPress any key to go back to Menu.");
				}
			}
			else
			{
				fprintf(rp,"%s %i %i %i\n", st.productname,st.price, st.productid,st.Qnt);
				fflush(stdin);
			}

		}
		if(!a)
		{
			printf("\n\nTHIS ITEM DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("medicine.dat");
		rename("TempFile.dat","medicine.dat");
		getch();
	}
	menu();
}

void restrictedproduct()
{
	FILE *f;
	int i, q;
	if((f=fopen("restricted.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{

		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("-");

		}
		gotoxy(5,6);
		printf("Product Name");
		gotoxy(25,6);
		printf("Price");
		gotoxy(40,6);
		printf("Company Name");
		gotoxy(60,6);
		printf("Product CODE");
		gotoxy(80,6);
		printf("Quantity\n");

		for(i=0;i<100;i++)
		{

			printf("-");

		}
		q=8;
		while(fscanf(f,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%s",st.productcomp);
			gotoxy(60,q);
			printf("%i",st.productid);
			gotoxy(80,q);
			printf("%i",st.Qnt);

			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("-");

	}
	fclose(f);

	printf("\nPress any key to go to Main Menu!");

		getch();
		menu();
}



void total_bill()
{
    FILE *fp;
    char c;
    char name[200];
    char mobile[200];
   float total_amount, amount, sub_total, discount_amount, tax_amount, quantity, value, discount, tax;

  printf("Enter the customar name:\n");
  scanf("%s",name);
  printf("Enter mobile number:\n");
  scanf("%s",mobile);

  printf("\nEnter the quantity of product sold: ");
  scanf ("%f", &quantity) ;
  printf("\nEnter the value of product: ");
  scanf("%f", &value);
  printf("\nEnter the discount percentage: ");
  scanf("%f", &discount);
  printf (" \n Enter the tax: ") ;
  scanf ("%f", &tax) ;
  amount = quantity * value;
  discount_amount = (amount* discount)/100.0;
  sub_total =amount - discount_amount;
  tax_amount= (sub_total*tax) /100.0;
  total_amount =sub_total+ tax_amount;
  printf (" \n\n\n \xdb\xdb\xdb\xdb\xdb BILL \xdb\xdb\xdb\xdb\xdb ") ;
  printf("\nQuantitySold: %f", quantity);
  printf("\nPriceperitem: %f", value);
  printf (" \n -------------") ;
  printf ("\nAmount: %f", amount);
  printf (" \n Discount: - %f", discount_amount) ;
  printf ("\n Discounted Total: %f", sub_total) ;
  printf ("\n Tax:+ %f", tax_amount);
  printf("\n---------------------");
  printf ("\n Total Amount %f", total_amount);

  fp=fopen("cosm.dat","a");
  fprintf(fp,"\n %s %f %s",name,total_amount,mobile);
  fclose(fp);

  printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


}

void customardetails()
{


FILE *fp;

	int i, q;
	if((fp=fopen("cosm.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("NO RECORDS");
		printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


	}
	else
	{

		gotoxy(0,5);

		gotoxy(5,6);
		printf("Customar Name");
		gotoxy(25,6);
		printf("Total amount");
		gotoxy(40,6);
		printf("Mobile number");



		q=8;
		while(fscanf(fp,"%s  %f %s\n",st.productname,&st.a,st.b)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%f",st.a);
			gotoxy(40,q);
			printf("%s",st.b);

			q++;
		}
		printf("\n");

	}
	fclose(fp);

	printf("\nPress any key to go to Main Menu!");
		//while((st.c = getch()) =='\r');
		getch();
		menu();
}


void totalsell()
{

    FILE * fp;
     int i,maxsell = -1;
     float  sum=0;




    fp = fopen("cosm.dat", "r");
    if (fp == NULL)
        {
        printf(" FILE Error. ");
        printf("\n\t\tPress any key to go back to Menu.");
		getch();
		menu();


        }


    else
    {


   while(fscanf(fp,"%s  %f %s \n",st.productname,&st.a,st.b)!=EOF)
   {


        sum = sum +st.a;
        i++;
    }
    printf("\nHEY!!!!BOSS!!Total Sell Today: %f" , sum);

    }

    fclose(fp);


    printf("\nPress any key to go to Main Menu!");

		getch();
		menu();
}

