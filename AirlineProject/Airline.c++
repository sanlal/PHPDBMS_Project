//PSP PROJECT  ROLL NO: 22MCF1R40  NAME: RAMAVATH SANTHOSH


#include<iostream>
#include<fstream>   //for file handling expressions
#include<iomanip>   //for floating point values

using namespace std;

void mainMenu();    //prototype of mainMenu function

int ascii= 005;
char ch = ascii;


//we use this function many times. So Iam declaring Globally
class Management
{
	public:
		
		Management()    //we creating a CONSTRUCTOR
		{
			mainMenu(); //we call a function mainMenu()
		}
};




//Now we create a DETAILS CLASS to add customer informations
class Details
{
	public:
		
		static string name, gender;
		int phoneNo;
		int age;
		string add;     //add = address
		static int cId; //cId = customer Id
		char arr[100];
		
		void information()
		{
			int ascii= 002;
        	char ch = ascii;
			cout<<endl<<ch<<ch<<ch<<" Enter the customer ID: ";
			cin>>cId;
			cout<<endl<<ch<<ch<<ch<<" Enter the Name       : ";
			cin>>name;
			cout<<endl<<ch<<ch<<ch<<"  Enter the Age       : ";
			cin>>age;
			cout<<endl<<ch<<ch<<ch<<" Address              : ";
			cin>>add;
			cout<<endl<<ch<<ch<<ch<<" Enter Gender         : ";
			cin>>gender;
			cout<<endl<<endl<<ch<<ch<<ch<<" Your details are saved with us\n"<<endl;
			
		}
};

//some of the variables of detail class we use in the ticket class. 
//So for that we using scope resolution operator declare variables outside the function 

int Details::cId; //scope reolution operator "::"
string Details::name;
string Details::gender;


//REGISTRATION CLASS to book a flight
class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
				
			}
			
		    cout<<"\n\n~~~~~~Welcome to the SANTHOSH Airlines! ~~~~~~\n "<<endl;
		    cout<<" Press the number of the country of which you want to book flight: ";
		    cin>>choice;
		    
		    switch(choice)
		    {
			case 1:
				{
					for(int i=0;i<35;i++){
					cout<<ch;
					}
				    cout<<" Welcome to Dubai Emirates ";
				    for(int i=0;i<35;i++){
					cout<<ch;
					}
					cout<<endl<<endl;
				   
				   cout<<ch<<ch<<ch<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<ch<<"Following are the flights \n"<<endl;
				   
				   cout<<ch<<ch<<" 1. Dub - 498 "<<endl;
				   cout<<ch<<ch<<"\t 08-01-2022 \t 8:00AM \t 10hrs \t Rs. 14000 "<<endl;
				   cout<<ch<<ch<<" 2. Dub - 658 "<<endl;
				   cout<<ch<<ch<<"\t 09-01-2022 \t 4:00PM \t 13hrs \t Rs. 10000 "<<endl;
				   cout<<ch<<ch<<" 3. Dub - 578 "<<endl;
				   cout<<ch<<ch<<"\t 11-01-2022 \t 11:00AM \t 15hrs \t Rs. 9000 "<<endl;				   				   
				
				   cout<<endl<<ch<<ch<<" Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=14000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight DUB - 498"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=10000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight DUB - 658"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=9000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight DUB - 578"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<ch<<ch<<" Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<" Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }
				}
				
			case 2:
				{
					for(int i=0;i<35;i++){
					cout<<ch;
					}
				    cout<<" Welcome to Canadian Airlines ";
				    for(int i=0;i<35;i++){
					cout<<ch;
					}
					
					cout<<endl<<endl;
				   
				   cout<<ch<<ch<<" Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<" Following are the flights \n"<<endl;
				   
				   cout<<ch<<ch<<" 1. CA - 198 "<<endl;
				   cout<<ch<<ch<<"\t 09-01-2022 \t 2:00AM \t 20hrs \t Rs. 34000 "<<endl;
				   cout<<ch<<ch<<" 2. CA - 158 "<<endl;
				   cout<<ch<<ch<<"\t 10-01-2022 \t 6:00PM \t 23hrs \t Rs. 29000 "<<endl;
				   cout<<ch<<ch<<" 3. CA - 208 "<<endl;
				   cout<<ch<<ch<<"\t 14-01-2022 \t 12:00AM \t 21hrs \t Rs. 40000 "<<endl;				   				   
				
				   cout<<endl<<ch<<ch<<"Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=34000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight CA - 198"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=29000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight CA - 158"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=40000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight CA - 208"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<ch<<ch<<" Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<" Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }
				   	
				}
				
			case 3:
				{
					
					for(int i=0;i<35;i++){
					cout<<ch;
					}
				   cout<<" Welcome to UK Airways ";
				   for(int i=0;i<35;i++){
					cout<<ch;
					}
					
					cout<<endl<<endl;
				   
				   cout<<endl<<ch<<ch<<" Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<" Following are the flights \n"<<endl;
				   
				   cout<<ch<<ch<<ch<<" 1. UK - 798 "<<endl;
				   cout<<ch<<ch<<ch<<"\t 12-01-2022 \t 10:00AM \t 14hrs \t Rs. 44000 "<<endl;
				 				   				   
				
				   cout<<endl<<ch<<ch<<" Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=44000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight UK - 798"<<endl;
				   	   cout<<ch<<ch<<"You can go back to menu and take the ticket"<<endl;
				   }
				   
				   
				   else
				   {
				   	cout<<ch<<ch<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<"Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }	
				}
				
			case 4:
				{
					for(int i=0;i<35;i++){
					cout<<ch;
					}
				   cout<<" Welcome to US Airways ";
				   for(int i=0;i<35;i++){
					cout<<ch;
					}
				   	cout<<endl<<endl;

				   cout<<endl<<ch<<ch<<" Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<" Following are the flights \n"<<endl;
				   
				   cout<<" 1. US - 567 "<<endl;
				   cout<<"\t 08-01-2022 \t 8:00AM \t 21hrs \t Rs. 37000 "<<endl;
				   cout<<" 2. US - 954"<<endl;
				   cout<<"\t 09-01-2022 \t 4:00PM \t 22hrs \t Rs. 39000 "<<endl;
				   cout<<" 3. US - 811 "<<endl;
				   cout<<"\t 11-01-2022 \t 11:00AM \t 20hrs \t Rs. 42000 "<<endl;				   				   
				
				   cout<<endl<<ch<<ch<<" Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=37000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  US - 567"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=39000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  US - 954"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=42000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  US - 811"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<ch<<ch<<" Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<" Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }
				}
			case 5:
				{
				   for(int i=0;i<35;i++){
					cout<<ch;
					}
				   cout<<" Welcome to Australian Airlines ";
				   for(int i=0;i<35;i++){
					cout<<ch;
					}
				   
				   cout<<endl<<ch<<ch<<" Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<" Following are the flights*** \n"<<endl;
				   
				   cout<<" 1. AS - 698 "<<endl;
				   cout<<"\t 18-01-2022 \t 9:00PM \t 20hrs \t Rs. 44000 "<<endl;
				   cout<<" 2. AS - 954"<<endl;
				   cout<<"\t 19-01-2022 \t 4:00AM \t 25hrs \t Rs. 34000 "<<endl;
				   cout<<" 3. AS - 708 "<<endl;
				   cout<<"\t 17-01-2022 \t 11:00AM \t 21hrs \t Rs. 42000 "<<endl;				   				   
				
				   cout<<endl<<endl<<ch<<ch<<" Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=44000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  AS - 698"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=30000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  AS - 954"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=42000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  AS - 708"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<ch<<ch<<ch<<" Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<ch<<" Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }	
				}
				case 6:
					{
						for(int i=0;i<35;i++){
					    cout<<ch;
					    }
						 cout<<" Welcome to Europian Airlines ";
						 for(int i=0;i<35;i++){
						 	cout<<ch;
					     }
				   
				   cout<<endl<<ch<<ch<<" Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<ch<<ch<<ch<<" Following are the flights \n"<<endl;
				   
				   cout<<ch<<ch<<ch<<" 1. EU - 567 "<<endl;
				   cout<<ch<<ch<<ch<<"\t 02-01-2022 \t 2:00AM \t 18hrs \t Rs. 36000 "<<endl;
				   cout<<ch<<ch<<ch<<" 2. EU - 954"<<endl;
				   cout<<ch<<ch<<ch<<"\t 03-01-2022 \t 6:00AM \t 22hrs \t Rs. 39000 "<<endl;
				   cout<<ch<<ch<<ch<<" 3. EU - 811 "<<endl;
				   cout<<ch<<ch<<ch<<"\t 05-01-2022 \t 11:00AM \t 20hrs \t Rs. 31000 "<<endl;				   				   
				
				   cout<<endl<<ch<<ch<<ch<<" Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=36000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  EU - 567"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=39000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  EU - 954"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=31000;
				   	   cout<<endl<<endl<<ch<<ch<<" You have successfully booked the flight  EU - 811"<<endl;
				   	   cout<<ch<<ch<<" You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<ch<<ch<<ch<<" Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<ch<<ch<<" Press any key to go back to the main menu: "<<endl;
				   cin>>back;
				   
				   if(back==1)
				   {
				   	mainMenu();
				   	
				   }
				   else
				   {
				   	mainMenu();
				   	
				   }
				   }
				default:
					{
						cout<<ch<<ch<<ch<<" Invalid input, Shifting to the main Menu !"<<endl;
						mainMenu();
						break;
					}
	    	}
    	}
};


float registration::charges; //we have to also use some registration variables in ticket class.
int registration::choice;



//In TICKET CLASS we using MULTIPLE INHERITANCE
class ticket : public registration,public Details
{
	public:
		
		void Bill()
		{
			string destination=""; //we have to make choice for customer to choose
			ofstream outf("records.txt");  //used to create or write information in the files
			 //Data of the files will be stored in records.txt; 
		    {
				outf<<"_________________________________________SANTHOSH AIRLINES________________________________________"<<endl;
				outf<<"_________________________________________TICKET___________________________________________________"<<endl;
				outf<<"__________________________________________________________________________________________________"<<endl;
				
				outf<<"Customer ID    :  "<<Details::cId<<endl;
				outf<<"Customer Name  :  "<<Details::name<<endl;
				outf<<"Customer Gender:  "<<Details::gender<<endl;
				outf<<"\t___Description____ "<<endl<<endl;
				
			    if(registration::choice==1)
			    {
			    	destination=" Dubai ";
				}
				
				else if(registration::choice==2)
			    {
			    	destination=" Canada ";
				}
				else if(registration::choice==3)
			    {
			    	destination=" UK ";
				}
				if(registration::choice==4)
			    {
			    	destination=" USA ";
				}
				if(registration::choice==5)
			    {
			    	destination=" Australia ";
				}
				else if(registration::choice==6)
			    {
			    	destination=" Europe ";
				}
				
				outf<<"Destination : \t\t"<<destination<<endl;
				outf<<"Flight Cost : \t\t"<<registration::charges<<endl;
				
			}
			outf.close();
			
		}
		void dispBill() //to displat the bill
		{
			ifstream ifs("records.txt");   //used to read from the file
			{
				if(!ifs)  //if file doesnt exits
				{
					cout<<"File error!"<<endl;
				}
				while(!ifs.eof())   //if file is there
				 //eof= end of file //That is we are checking the file till the end, that is every content of the file will check
				{
					ifs.getline(arr, 100); //getline used to read the content from file
					cout<<arr<<endl;
				}
			}
			ifs.close();		
		}
};



//MAIN MENU
void mainMenu() //creating menu that will display on the screen
{
	int lchoice;
	int schoice;
	int back;
	//layout or structure
	for(int i=0;i<31;i++){
		cout<<ch;
    }
	cout<<" SANTHOSH AIRLINES ";
	for(int i=0;i<31;i++){
		cout<<ch;
     }
     cout<<endl<<endl;
     for(int i=0;i<35;i++){
		cout<<ch;
        }
	cout<<" MAIN MENU ";
	 for(int i=0;i<35;i++){
		cout<<ch;
        }
    cout<<endl<<endl;
	
	 for(int i=0;i<81;i++){
		cout<<ch;
        }
        cout<<endl;
	cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the customer details     \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration         \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
	cout<<"\t|\t Press 4 to EXIT                         \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
	 for(int i=0;i<81;i++){
		cout<<ch;
        }
//taking input from user
    cout<<endl<<"Enter the choice : ";
    cin>>lchoice;
//separate class for all three of them. So I am creating objects here
    Details d;
    registration r;
    ticket t;
    
    switch(lchoice)
    {
    	
    	case 1:
    		{
    			int ascii=003;
    			char ch=ascii;
    			cout<<endl;
    			for(int i=0;i<35;i++){
				cout<<ch;
				}
    			cout<<" Customer ";
    			for(int i=0;i<35;i++){
				cout<<ch;
				}
    			d.information(); //calling function
    			cout<<ch<<ch<<"Press any key to go back to Main Menu ";
    			cin>>back;
    			
    			if(back==1)
    			{
    				mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
		
		case 2:
		{
			cout<<"_________________Book a flight using this system_______________\n"<<endl;
			r.flights();
			break;
			}	
			
		case 3:
			{
			
		cout<<"_________Get Your Ticket__________\n"<<endl;
		t.Bill();
		
		cout<<ch<<ch<<ch<<" Your ticket is printed, you can collect it \n"<<endl;
		cout<<ch<<ch<<ch<<" Press 1 to display your ticket ";
		
		cin>>back;
		
		  if(back==1)
		  {
		  	t.dispBill();
		  	cout<<ch<<ch<<ch<<"Press any key to go back to main Menu: ";
		  	cin>>back;
		  	if(back==1)
		  	{
		  		mainMenu();
			  }
			  else
			  {
			  	mainMenu();
			  }
			  
		  }	
			else
			{
				mainMenu();
			  }  
			  break;
	 }
	 
	    case 4:
	    	{
	    		cout<<"\n\n________Thank you____________"<<endl;
	    		break;
			}
			
		    default:
		    	{
		    		cout<<"Invalid input, Please try again!\n"<<endl;
		    		mainMenu();
		    		break;
				}
	}
	
	
	
	
}


//MAIN FUNCTION

int main()
{
	Management Mobj; //creating object name
	return 0;
}




//PROJECT DONE BY RAMAVATH SANTHOSH 
//PROJECT NAME: AIRLINE REGISTRATION
/*USED CONCEPTS OF C++ are:
    1. Classes and objects
    2. Constructor
    3. Scope Resolution
    4. Static function
    5. ifstream filehandling 
    6. Loops
    7. Switch cases
    8. INHERITANCE, Encapsulation, Abstraction
    */


