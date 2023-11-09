#include<stdio.h>
#include <time.h>// To use time library of C

struct login { //structure declaration of login system
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
};

void registe(){ //registration fnc for user to register


    FILE*log; //file pointing to log file
    log=fopen("login12.txt","w");//login file opened in write mode

    struct login l; //login structure called

    printf("Enter First name: ");
    scanf("%s",l.fname); // user info input
    printf("Enter Last name: ");
    scanf("%s",l.lname); // user info input
    printf("Enter Username: ");
    scanf("%s",l.username); // user info input
    printf("Enter Password: ");
    scanf("%s",l.password); // user info input
    fwrite(&l,sizeof(l),1,log);

fclose(log);// login file closed

   printf("\n\n Your User NAME is UserID \n");
   printf("\n Now log in with UserID and Password\n");
   printf("\nPress any key to continue....");
getch(); //makes 'press any key to continue' work and keeps console screen open
system("CLS"); //It clears the output screen of the program.
login(); //login fnc called for user to login after registration
}


void login(){  //login fnc for user to login

int p;
 char username[100],password[20];

FILE*log; //file pointing to log file
log=fopen("login12.txt","r"); //login file opened in read mode

 struct login l;//login structure called

printf("User ID:");
scanf("%s",&username);//user ID input
printf("Password :");
scanf("%s",&password);//user Password input

while(fread(&l,sizeof(l),1,log)) //reads the login file where registration info of user is stored
{
    if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0) //compares the input data with the registration data
                                                                        //which is stored in the file and if it matches, it
                                                                        //returns a zero and the code is executed
    {
        printf("\n Login Successful\n \n");
        imp();//if login is successful them imp fnc is called which in turn calls and executes all other fncs
    }
    else { //if user inputs wrong user ID and password this part executes
        printf("\n LOGIN UNSUCCESSFUL \n ");
        printf("\n Please Enter correct UserID and Password and try again \n ");
    }
}
fclose(log); //file is closed
}
struct car {
    char brand[100];
    char type[20];
    int price_per_day;
};

// Function to display available car inventory
void displayInventory() {
    printf("\n ------ Car Inventory ------\n");

    // Define an array of car structures
    struct car cars[] = {
        {"BMW", "Sedan", 6000},
        {"Toyota", "Sedan", 4500},
        {"Tata", "Sedan", 3000},
        {"Honda", "SUV", 4850},
        {"Nissan", "SUV", 2850},
        {"Ford", "Pickup Truck", 2800},
        {"Volvo", "Pickup Truck", 2500},
        {"Mercedes-Benz", "Sedan", 8000},
        {"Mazda", "SUV", 3500},
        {"Hyundai", "SUV", 4650}
    };

    // Display car details
    for (int i = 0; i < 10; i++) {
        printf("\n %d -- %s - %s - %d TK/D", i + 1, cars[i].brand, cars[i].type, cars[i].price_per_day);
    }
    printf("\n -----------------------------------\n");
}

void premium(int i){ // execution of premium function where value of i is passed into premium fnc.

    int j,k;
    FILE *fp; //file pointer to fp

    fp=fopen("Car.txt","a"); //append mode of file.It can stored more than one data from user

    if(i==1){ // if value of i=1 premium function will be called

    printf("\n ------ Premium Car Brands ------\n");
    printf("\n 1  --  BMW ---------    6000  TK/D \n");      //pricing info. for different cars
    printf("\n 2  --  Toyota --------- 4500  TK/D \n");
    printf("\n 3  --  Tata ---------   3000  TK/D \n");
    printf("\n 4  --  Honda ---------  4850  TK/D \n");
    printf("\n 5  --  Nissan --------- 2850  TK/D \n");
    printf("\n 6  --  Ford ----------  2800  TK/D \n");
    printf("\n 7  --  Volvo ---------  2500  TK/D \n");
    printf("\n 8  --  Mercedes -- Benz 8000  TK/D \n");
    printf("\n 9  --  Mazda ---------  3500  TK/D \n");
    printf("\n 10 -- Hyundai --------- 4650  TK/D \n");
    printf("\n -----------------------------------\n");


    printf ("\n Enter Car Brand: ");
        scanf ("%d", &j);  //car brand will be stored in j variable

        switch(j){

        case 1 : { //if user choose BMW this case will execute
        fputs("\n 6000",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 2 : { //if user choose Toyota this case will execute

        fputs("\n 4500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 3 : { //if user choose Tata this case will execute

        fputs("\n 3000",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 4 : { //if user choose Honda this case will execute

        fputs("\n 4850",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 5 : { //if user choose Nissan this case will execute

        fputs("\n 2850",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 6 : { //if user choose Ford this case will execute

        fputs("\n 2800",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 7 : { //if user choose Volvo this case will execute

        fputs("\n 2500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 8 : { //if user choose Mercedes this case will execute

        fputs("\n 8000",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 9 : { //if user choose Mazda this case will execute

        fputs("\n 3500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 10 : {  //if user choose Hyundai this case will execute

        fputs("\n 4650",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    }
    }
    fclose(fp); //file is closed
}

void normal(int i){ // execution of normal function where value of i is passed into noramal fnc.

    int j,k;
    FILE *fp;//file pointer to fp

    fp=fopen("Car.txt","a"); //append mode of file.It can stored more than one data from user


    if(i==2){ // if value of i=1 premium function will be called

    printf("\n ------ Budget Car Brands ------\n");
    printf("\n 1  -- Mitsubishi -- 3000  TK/D \n"); //pricing info. for different cars
    printf("\n 2  -- Toyota ------ 2250  TK/D \n");
    printf("\n 3  -- Tata -------- 1500  TK/D \n");
    printf("\n 4  -- Honda ------- 2425  TK/D \n");
    printf("\n 5  -- Nissan ------ 1425  TK/D \n");
    printf("\n 6  -- Ford -------- 1400  TK/D \n");
    printf("\n 7  -- Volvo ------- 1250  TK/D \n");
    printf("\n 8  -- KAI --------- 3500  TK/D \n");
    printf("\n 9  -- Mazda ------- 1750  TK/D \n");
    printf("\n 10 -- Hyundai ---- 2350  TK/D \n");
    printf("\n -----------------------------------\n");


    printf (" \n Enter Car Brand: ");
        scanf ("%d", &j); //car brand will stored in j variable

        switch(j){

        case 1 : { //if user choose Mitsubishi this case will execute
        fputs("\n 3000",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 2 : { //if user choose Toyota this case will execute

        fputs("\n 2250",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 3 : { //if user choose Tata this case will execute

        fputs("\n 1500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 4 : { //if user choose Honda this case will execute

        fputs("\n 2425",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 5 : { //if user choose Nissan this case will execute

        fputs("\n 1425",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 6 : { //if user choose ford this case will execute

        fputs("\n 1400",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 7 : { //if user choose Volvo this case will execute

        fputs("\n 1250",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 8 : { //if user choose Kai this case will execute

        fputs("\n 3500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 9 : { //if user choose Mazda this case will execute

        fputs("\n 1750",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 10 : {  //if user choose Hyundai this case will execute

        fputs("\n 2350",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    }
    }
    fclose(fp); //file is closed
}


void low(int i){ // execution of low function where value of i is passed into low fnc.

    int j,k;
    FILE *fp; //file pointer to fp

    fp=fopen("Car.txt","a");//append mode of file.It can stored more than one data from user

    if(i==3){

    printf("\n ------ Low Budget Car Brands ------\n");
    printf("\n  1-- Mitsubishi -- 1500  TK/D \n"); //pricing info. for different cars
    printf("\n  2-- Toyota ------ 1150  TK/D \n");
    printf("\n  3-- Tata --------- 750  TK/D \n");
    printf("\n  4-- Honda ------- 1212  TK/D \n");
    printf("\n  5-- Nissan ------- 712  TK/D \n");
    printf("\n  6-- Ford --------- 700  TK/D \n");
    printf("\n  7-- Volvo -------- 650  TK/D \n");
    printf("\n  8-- KAI --------- 1750  TK/D \n");
    printf("\n  9-- Mazda -------- 875  TK/D \n");
    printf("\n  10- Hyundai ----- 1175  TK/D \n");
    printf("\n -----------------------------------\n");


    printf (" \n Enter Car Brand: "); //car brand will stored in j variable
        scanf ("%d", &j);

        switch(j){

        case 1 : { //if user choose Mitsubishi this case will execute
        fputs("\n 1500",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 2 : {  //if user choose Toyota this case will execute

        fputs("\n 1150",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 3 : { //if user choose Tata this case will execute

        fputs("\n 750",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 4 : { //if user choose Honda this case will execute

        fputs("\n 1212",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 5 : {  //if user choose Nissan this case will execute

        fputs("\n 712",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 6 : { //if user choose Ford this case will execute

        fputs("\n 700",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 7 : { //if user choose Volvo this case will execute

        fputs("\n 650",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 8 : { //if user choose Kai this case will execute

        fputs("\n 1750",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 9 : { //if user choose Mazda this case will execute

        fputs("\n 875",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    case 10 : { //if user choose Hyundai this case will execute

        fputs("\n 1175",fp); //prints pricing of the chosen car in Car.txt file
        break;
    }
    }
    }
    fclose(fp); //file is closed
}

void imp(){

    int b,number_of_seconds=1,n,in,x=0,payment=0,sum=0,mult=0,num=0; //variable declarations
    char cardno[17];
    char date[9];
    char cvv[4];
    FILE *fp; //file pointer to fp
    FILE *fp2; //file pointer to fp2

    printf(" Enter how many cars do you want to rent : ");
    scanf("%d",&n); //cars number will stored in n.

    while(n--) //this condition will reduce the value of n
    {
        printf("\n CAtegory of vehicles :: \n");
        printf("\n 1 --- Sedan \n 2 --- SUV \n 3 --- Pickup truck \n"); //three types of vehicles are here
        printf("\n Enter the Category of vehicles you want to rent: ");
        scanf("%d",&in); //Category of vehicles number will be stored in >>in

        switch(in)
        {
            case 1: { //if the user choose sedan types of car then this case will execute

                int i;

            printf("\n Types of Car:: \n");
            printf("\n 1 --- Premium \n 2 --- Normal \n 3 --- Low \n");
            printf("\n Enter no. to select what type of car do you want: ");
            scanf("%d",&i); //type of cars will be stored in i
            // value of i determines which function will be called from premium/normal/low

            premium(i);//if user put i=1 then it call the premium function
            normal(i); //if user put i=2 then it call the normal function
            low(i); //if user put i=3 then it call the low function

            break;
            }


            case 2: { //if the user choose suv types of car then this case will execute

                int i;

            printf("\n Types of Car:: \n");
            printf("\n 1 --- Premium \n 2 --- Normal \n 3 --- Low \n");
            printf("\n Enter no. to select what type of car do you want: ");
            scanf("%d",&i);//type of cars will be stored in i

           premium(i); //if user put i=1 then it call the premium function
           normal(i); //if user put i=2 then it call the normal function
           low(i); //if user put i=3 then it call the low function

           break;
            }

            case 3: { //if the user choose pick up types of car then this case will execute

                int i;

            printf("\n Types of Car:: \n");
            printf("\n 1 --- Premium \n 2 --- Normal \n 3 --- Low \n");
            printf("\n Enter no. to select what type of car do you want: ");
            scanf("%d",&i); //type of cars will be stored in i

            premium(i); //if user put i=1 then it call the premium function
            normal(i); //if user put i=2 then it call the normal function
            low(i); //if user put i=3 then it call the low function

            break;

            }
        }
    }

    printf("\n Enter Duration of rent(days):");
    scanf("%d",&x); //duration will stored in x variable

    fp=fopen("Car.txt","r"); //open file in read mode

   while(fscanf(fp,"\n %d",&payment)!=EOF){ //read the file where pricing info of chosen cars are stored

        sum+=payment;  //summation of bill
        mult=sum*x;   //summation*days
    }
    printf("\n Your TOTAL BILL : %d tk\n", mult);

    fclose(fp); //file is closed

    printf(" \n -------------PAYMENT------------- \n  \n");
    printf("\n Your TOTAL BILL : %d tk\n", mult);
    printf(" \n Choose your payment type: \n  \n");
    printf(" Press '1' for payment by VIA CARD\n \n");
    printf(" Press '2' for payment by OUTLET\n \n");
    scanf("%d",&num); //user input of card or outlet payment

    if(num==1) //if user choose via card this case will execute
    {
        printf(" \n You chose via CARD Payment process :\n \n");


        printf(" Enter your 16 Digit CARD no :\n");
        scanf("%s",cardno); //user info input for payment

         printf(" Enter your card EXPIRY date(D/M/Y):\n");
        scanf("%s",date); //user info input for payment

         printf(" Enter your 3 digit CVV no :\n");
        scanf("%s",cvv); //user info input for payment

        printf(" -------Payment Proccesing------\n \n");


	for (b = 0; b < 5; b++) {
		// delay of one second

		// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;


		printf("\n ***** \n", b + 1);
	}
        printf(" -------Payment SUCCESFULL------\n \n");
    }
    else{  //if user choose outlet payment this case will execute
        printf(" You chose outlet payment \n\n");
        printf(" Our Outlets are in the following locations : \n\n Mirpur \n Gabtoli \n Kuril Highway \n Badda \n Rampura \n Banashree \n Demra \n Jatrabari \n Gulistan \n Dhanmondi \n Gulshan \n Savar \n Mohakhali");
        printf("\n \n Please resolve payment at your earliest convenience \n \n");
    }

    if(num==1){ //if user choose via card this case will execute

            fp2=fopen("RECEIPT.txt","w"); // Receipt.txt file opened in write mode
        //receipt printed for user where all info is showed in console

        printf("-------------------- RECEIPT -------------------");
        printf(" \n         Your CARD no :   -----  %s",cardno);
        printf(" \n         Your CARD Expiry date : %s",date);
        printf(" \n         Your CVV no :    -----  %s",cvv);
        printf(" \n         Your TOTAL :     -----  %d tk",mult);
        printf(" \n         Amount PAID :    -----  %d tk",mult);
        printf(" \n\n       **THANK YOU FOR CHOOSING US** \n");
        printf("------------------------------------------------");
        printf("\n Print RECEIPT.txt file to receive a physical copy of the receipt \n");

        //receipt printed for user where all info is printed in file.

        fprintf(fp2,"------------------- RECEIPT -------------------");
        fprintf(fp2," \n         Your CARD no :   -----  %s",cardno);
        fprintf(fp2," \n         Your Card Expiry date : %s",date);
        fprintf(fp2," \n         Your CVV no :    -----  %s",cvv);
        fprintf(fp2," \n         Your TOTAL  :    -----  %d tk",mult);
        fprintf(fp2," \n         Amount PAID :    -----  %d tk",mult);
        fprintf(fp2," \n\n       **THANK YOU FOR CHOOSING US** \n");
        fprintf(fp2,"-------------------------------------------------");

        fclose(fp2);

    }
    else{ //if user choose via outlet this case will execute
            fp2=fopen("RECEIPT.txt","w");  // Receipt.txt file opened in write mode
        //receipt printed for user where all info is showed in console

        printf("--------------------- RECEIPT -------------------");
        printf(" \n         Your TOTAL  : ----- %d tk",mult);
        printf(" \n         Amount PAID : ----- NOT PAID ");
        printf(" \n\n       **THANK YOU FOR CHOOSING US** \n");
        printf("--------------------------------------------------");
        printf("\n Print RECEIPT.txt file to receive a physical copy of the receipt \n");

        //receipt printed for user where all info is printed in file.

        fprintf(fp2,"--------------------- RECEIPT -------------------");
        fprintf(fp2," \n         Your TOTAL   : ----- %d tk",mult);
        fprintf(fp2," \n         Amount PAID  : ----- NOT PAID ");
        fprintf(fp2," \n\n       **THANK YOU FOR CHOOSING US** \n");
        fprintf(fp2,"-------------------------------------------------");

        fclose(fp2); //file is closed
    }

}


void main() {
    int cho;
    printf("Press '1' for REGISTRATION\nPress '2' for LOGIN\n\n");
    scanf("%d", &cho);

    if (cho == 1) {
        system("CLS");
        registe();
    } else if (cho == 2) {
        system("CLS");
        login();
    }

    int del = remove("Car.txt");

    // Display car inventory to the client
    printf("Welcome to our Car Rental Service!\n");
    displayInventory();
    printf("Please choose your car and follow the prompts for renting.\n");
}
