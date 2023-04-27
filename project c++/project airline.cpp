//PSP PROJECT  ROLL NO: 22MCF1R40  NAME: RAMAVATH SANTHOSH


#include<iostream>
#include<fstream>   //for file handling expressions
#include<iomanip>   //for floating point values

using namespace std;

void mainMenu();    //prototype of mainMenu function
class registration;
class ticket;



//we use this function many times. So Iam declaring Globally
class Management
{
	public:
		
		Management()    //we creating a CONSTRUCTOR
		{
			mainMenu(); //we call a function mainMenu()
		}
	/*	~Management()
		{
			cout<<" ";
		}
	*/	
};




//Now we create a DETAILS CLASS to add customer informations
class Details
{
	private:	
		static string name, gender;
		int phoneNo;
		int age;
		string add;     //add = address
		static int cId; //cId = customer Id
		char arr[100];
	public:
	
	friend registration;
	friend ticket;
	
	void information()
		{
			cout<<"\nEnter the customer ID: ";
			cin>>cId;
			cout<<"\nEnter the name: ";
			cin>>name;
			cout<<"\nEnter the age: ";
			cin>>age;
			cout<<"\n Address: ";
			cin>>add;
			cout<<"\nEnter Gender: ";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
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
			
		    cout<<"\n~~~~~~Welcome to the SANTHOSH Airlines! ~~~~~~ "<<endl;
		    cout<<"Press the number of the country of which you want to book flight: ";
		    cin>>choice;
		    
		    switch(choice)
		    {
			case 1:
				{
				   cout<<"_______________________________Welcome to Dubai Emirates______________________________\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"Following are the flights \n"<<endl;
				   
				   cout<<" 1. Dub - 498 "<<endl;
				   cout<<"\t 08-01-2022 \t 8:00AM \t 10hrs \t Rs. 14000 "<<endl;
				   cout<<" 2. Dub - 658 "<<endl;
				   cout<<"\t 09-01-2022 \t 4:00PM \t 13hrs \t Rs. 10000 "<<endl;
				   cout<<" 3. Dub - 578 "<<endl;
				   cout<<"\t 11-01-2022 \t 11:00AM \t 15hrs \t Rs. 9000 "<<endl;				   				   
				
				   cout<<"\nSelect the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=14000;
				   	   cout<<"\n\n***You have successfully booked the flight DUB - 498"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=10000;
				   	   cout<<"\n\n***You have successfully booked the flight DUB - 658"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=9000;
				   	   cout<<"\n\n***You have successfully booked the flight DUB - 578"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
				    cout<<"\n\n______________________________Welcome to Canadian Airlines___________________________________\n\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"Following are the flights \n"<<endl;
				   
				   cout<<" 1. CA - 198 "<<endl;
				   cout<<"\t 09-01-2022 \t 2:00AM \t 20hrs \t Rs. 34000 "<<endl;
				   cout<<" 2. CA - 158 "<<endl;
				   cout<<"\t 10-01-2022 \t 6:00PM \t 23hrs \t Rs. 29000 "<<endl;
				   cout<<" 3. CA - 208 "<<endl;
				   cout<<"\t 14-01-2022 \t 12:00AM \t 21hrs \t Rs. 40000 "<<endl;				   				   
				
				   cout<<"\n***Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=34000;
				   	   cout<<"\n\n***You have successfully booked the flight CA - 198"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=29000;
				   	   cout<<"\n\n***You have successfully booked the flight CA - 158"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=40000;
				   	   cout<<"\n\n***You have successfully booked the flight CA - 208"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
					
				   cout<<"\n\n_____________________________________Welcome to UK Airways______________________________________\n\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"Following are the flights \n"<<endl;
				   
				   cout<<" 1. UK - 798 "<<endl;
				   cout<<"\t 12-01-2022 \t 10:00AM \t 14hrs \t Rs. 44000 "<<endl;
				 				   				   
				
				   cout<<"\n***Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=44000;
				   	   cout<<"\n\n***You have successfully booked the flight UK - 798"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
				   cout<<"\n\n_____________________________Welcome to US Airways____________________________________\n\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"Following are the flights \n"<<endl;
				   
				   cout<<" 1. US - 567 "<<endl;
				   cout<<"\t 08-01-2022 \t 8:00AM \t 21hrs \t Rs. 37000 "<<endl;
				   cout<<" 2. US - 954"<<endl;
				   cout<<"\t 09-01-2022 \t 4:00PM \t 22hrs \t Rs. 39000 "<<endl;
				   cout<<" 3. US - 811 "<<endl;
				   cout<<"\t 11-01-2022 \t 11:00AM \t 20hrs \t Rs. 42000 "<<endl;				   				   
				
				   cout<<"\n***Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=37000;
				   	   cout<<"\n\n***You have successfully booked the flight  US - 567"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=39000;
				   	   cout<<"\n\n***You have successfully booked the flight  US - 954"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=42000;
				   	   cout<<"\n\n***You have successfully booked the flight  US - 811"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
				   cout<<"\n\n______________________________________Welcome to Australian Airlines________________________________________\n\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"***Following are the flights*** \n"<<endl;
				   
				   cout<<" 1. AS - 698 "<<endl;
				   cout<<"\t 18-01-2022 \t 9:00PM \t 20hrs \t Rs. 44000 "<<endl;
				   cout<<" 2. AS - 954"<<endl;
				   cout<<"\t 19-01-2022 \t 4:00AM \t 25hrs \t Rs. 34000 "<<endl;
				   cout<<" 3. AS - 708 "<<endl;
				   cout<<"\t 17-01-2022 \t 11:00AM \t 21hrs \t Rs. 42000 "<<endl;				   				   
				
				   cout<<"\n***Select the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=44000;
				   	   cout<<"\n\n***You have successfully booked the flight  AS - 698"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=30000;
				   	   cout<<"\n\n***You have successfully booked the flight  AS - 954"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=42000;
				   	   cout<<"\n\n***You have successfully booked the flight  AS - 708"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
						 cout<<"\n\n________________________________Welcome to Europian Airlines___________________________________\n\n"<<endl;
				   
				   cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				   
				   cout<<"Following are the flights \n"<<endl;
				   
				   cout<<" 1. EU - 567 "<<endl;
				   cout<<"\t 02-01-2022 \t 2:00AM \t 18hrs \t Rs. 36000 "<<endl;
				   cout<<" 2. EU - 954"<<endl;
				   cout<<"\t 03-01-2022 \t 6:00AM \t 22hrs \t Rs. 39000 "<<endl;
				   cout<<" 3. EU - 811 "<<endl;
				   cout<<"\t 05-01-2022 \t 11:00AM \t 20hrs \t Rs. 31000 "<<endl;				   				   
				
				   cout<<"\nSelect the flight you want to book : ";
				   cin>>choice1;
				   
				   if(choice1==1)
				   {
				   	   charges=36000;
				   	   cout<<"\n\n***You have successfully booked the flight  EU - 567"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;
				   }
				   
				   else if(choice1==2)
				   {
	                   charges=39000;
				   	   cout<<"\n\n***You have successfully booked the flight  EU - 954"<<endl;
				   	   cout<<"\n***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else if(choice1==3)
				   {
	                   charges=31000;
				   	   cout<<"\n\n***You have successfully booked the flight  EU - 811"<<endl;
				   	   cout<<"***You can go back to menu and take the ticket"<<endl;			   	
				   }
				   else
				   {
				   	cout<<"Invalid input, shifting to the previous menu"<<endl;
				   	flights();
				   }
				   
				   cout<<"Press any key to go back to the main menu: "<<endl;
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
						cout<<"Invalid input, Shifting to the main Menu !"<<endl;
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
			string destination=""; //we have to make choice for customer
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
				
				outf<<"Destination  \t\t"<<destination<<endl;
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
	cout<<"\t___________________________________SANTHOSH AIRLINES______________________________________\t\t\t\t\n "<<endl;
	cout<<"\t_______________________________________Main Menu__________________________________________"<<endl;
	
	cout<<"\t__________________________________________________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the customer details     \t|"<<endl;
	cout<<"\t|\t Press 2 for Flight Registration         \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
	cout<<"\t|\t Press 4 to EXIT                         \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t\t|"<<endl;
	cout<<"\t_________________________________________________________"<<endl;
//taking input from user
    cout<<"Enter the choice : ";
    cin>>lchoice;
//separate class for all three of them. So I am creating objects here
    Details d;
    registration r;
    ticket t;
    
    switch(lchoice)
    {
    	
    	case 1:
    		{
    			cout<<"______________Customer____________\n"<<endl;
    			d.information(); //calling function
    			cout<<"Press any key to go back to Main Menu ";
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
		
		cout<<"Your ticket is printed, you can collect it \n"<<endl;
		cout<<"Press 1 to display your ticket ";
		
		cin>>back;
		
		  if(back==1)
		  {
		  	t.dispBill();
		  	cout<<"Press any key to go back to main Menu: ";
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
	    		int ascii=002;
	    		char ch=ascii;
	    		cout<<endl;
	    		for(int i=0;i<40;i++){
	    			cout<<ch;
				}
	    		cout<<"\n\t\tThank you!\t\t\t"<<endl;
	    		
	    		for(int i=0;i<40;i++){
	    			cout<<ch;
				}
				cout<<endl;
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
//PROJECT NAME: SANTHOSH AIRLINE REGISTRATION
/*USED CONCEPTS OF C++ are:
    1. Classes and objects
    2. Constructor
    3. Friend class
    4. Static
    5. ifstream filehandling
    6. Loops
    7. Switch cases
    8. INHERITANCE, Encapsulation, Abstraction
    9.FileHandling basics
    10.string
    11.Scope resolution
    */



