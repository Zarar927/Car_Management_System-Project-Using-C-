#include <iostream>
#include <iomanip>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

//user difine function w_c mean welcome 
void w_c()
{
	cout<<setw(80)<<"***WELCOME TO OUR AUTOMOBILE MANAGEMENT SYSTEM***"<< endl;
}

//This function using for taking user information from user
int user_profile()
{
	string name;//declare string datatype for name
	cout<<"Enter your name :";
	getline(cin,name);
	
	long long int phone;//declare long long int datatype for phone number
	cout<<"\nEnter your phone number :";
	cin>>phone; 
	
	long long int CNIC;//declare long long int datatype for id card number
	cout<<"\nEnter our CNIC number :";
	cin>>CNIC;
	
	ofstream user_i("personal.txt");//In this function we are using file handling 
	
	user_i<<name<<endl;
	user_i<<phone<<endl;
	user_i<<CNIC<<endl;
	
	user_i.close();
	
	system("CLS");//system CLS using for new page
}

//Intro mean introduction about our showroom
void intro()
{
	cout<<setw(80)<<"***Their are four brands of cars in our system***"<<endl;
}

//In this function user can choose any one brand of car 
void choosen()
{
	cout<<"\nWhich brand vehicle do you like choose in this "<<endl;
	
	cout<<"\n1.MERCEDES-BENZ "<<"\t"<<"2.HONDA"<<"\n"<<"\n3.SUZUKI"<<"\t\t"<<"4.TOYOTA"<<endl;
}

//This user define function using for choose a car in given vehicle
int choose(int& choose)
{
	//using for loop
	for (int i=1;i<=1;i++)
	{
		
	//Also using if else condition 
	if (choose==1)
	{
		cout<<"In mercedes we have five best cars which is very luxury and comfortable"<<endl;
		
		cout<<"\n1.Mercedes-Benz A-Class Sedan "<<"\t"<<"2.Mercedes-Benz C-Class C 200"<<endl;
		cout<<"\n3.Mercedes-Benz E-Class E 300 "<<"\t"<<"4.Mercedes-Benz S-Class S 450"<<"\n";
	    cout<<"\n5.Mercedes-Benz GLA 250"<<endl;
	    
	    //declare integer datatype for number 
	    int number;
	    
	    //This loop for if user enter wrong nummber then ask user again enter a number 
	    for (int i=0;i<1;i--)
	    {
	    	
	    cout<<"\nEnter a number between 1 to 5 :";
	    cin>>number;
	    
	    system("CLS");//new page
	    
	        //using if else condition for cars 
	    	if (number==1)
	    	{
	    		cout<<setw(80)<<"***Mercedes-Benz A-Class sedan***"<<endl;
	    		cout<<"\n1.Engine : 2.0-liter turbocharged four-cylinder engine that produces 188 horsepower."<<endl;
	    		cout<<"\n2.Transmission : 7-speed dual-clutch automatic transmission as standard."<<endl;
	    		cout<<"\n3.Fuel economy : 24-27 miles per gallon in city and 33-36 miles per gallon on the highway."<<endl;
	    		cout<<"\n4.Safety features : Adaptive cruise control, automatic emergency braking, and a rearview camera."<<endl;
	    		cout<<"\n5.Price is 12,000,000"<<endl;
	    		break;
			}
			else if (number==2)
	    	{
	    		cout<<setw(80)<<"***Mercedes-Benz C-Class C 200***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine that produces 201 horsepower."<<endl;
	    		cout<<"\n2. Transmission : 9-speed automatic transmission with shift paddles for manual control."<<endl;
	    		cout<<"\n3. Speed : Accelerate from 0-60 mph in 7.1 seconds and has a top speed of 130 mph."<<endl;
	    		cout<<"\n4. Fuel economy : 24 mpg in the city and 33 mpg on the highway."<<endl;
	    		cout<<"\n5. Price is 14,500,000"<<endl;
	    		break;
			}
			else if (number==3)
	    	{
	    		cout<<setw(80)<<"***Mercedes-Benz E-Class e 300***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 241 horsepower."<<endl;
	    		cout<<"\n3. Transmission : 9-speed automatic transmission with paddle shifters."<<endl;
	    		cout<<"\n4. Seating Capacity : 5"<<endl;
	    		cout<<"\n5. Price is 25 million"<<endl;
	    		break;
			}
			else if (number==4)
	    	{
	    		cout<<setw(80)<<"***Mercedes-Benz S-Class S 450***"<<endl;
	    		cout<<"\n1. Engine : 3.0-liter turbocharged V6 engine."<<endl;
	    		cout<<"\n2. Power : 362 horsepower."<<endl;
	    		cout<<"\n3. Transmission : 9-speed automatic transmission with paddle shifters."<<endl;
	    		cout<<"\n4. Seating Capacity : 5"<<endl;
	    		cout<<"\n5. Price is 54 million"<<endl;
	    		break;
			}
			else if (number==5)
	    	{
	    		cout<<setw(80)<<"***Mercedes-Benz GLA 250***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 221 horsepower."<<endl;
	    		cout<<"\n3. Transmission : 8-speed dual-clutch automatic transmission with paddle shifters."<<endl;
	    		cout<<"\n4. Fuel Efficiency : (FWD) or 24 mpg city/33 mpg highway (4MATIC AWD)."<<endl;
	    		cout<<"\n5. Price is 10.6 million"<<endl;
	    		break;
			}
		}
	}
	else if (choose==2)
	{
		cout<<"In honda we have five best cars which is very luxury and comfortable"<<endl;
	    cout<<"\n1.Honda Civic"<<"\t"<<"2.Honda City"<<endl;
		cout<<"\n3.Honda vezel"<<"\t"<<"4.Honda BR-V"<<"\n";
	    cout<<"\n5.Honda HR-V"<<"\t"<<endl;
	    
	    //declare integer datatype for number 
	    int number;
	    
	    //This loop for if user enter wrong nummber then ask user again enter a number 
	    for (int i=0;i<1;i--)
	    {
	    	cout<<"\nEnter a number between 1 to 5 :";
	        cin>>number;
	        
	        system("CLS");//new page
	        
	        //using if else condition for cars 
	    	if (number==1)
	    	{
	    		cout<<setw(70)<<"***Honda Civic***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Horsepower : 158 hp (2.0L engine)."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual or Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : 30 mpg city, 38 mpg highway (2.0L engine with CVT)."<<endl;
	    		cout<<"\n5. Price is 4,699,000"<<endl;
	    		break;
			}
			else if (number==2)
	    	{
	    		cout<<setw(70)<<"***Honda City***"<<endl;
	    		cout<<"\n1. Engine : 1.5L i-VTEC petrol engine."<<endl;
	    		cout<<"\n2. Power : 118 horsepower and 145 Nm torque."<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual."<<endl;
	    		cout<<"\n4. Fuel economy : 17.8 km/L (city/highway combined)."<<endl;
	    		cout<<"\n5. Price is 3,049,000"<<endl;
	    		break;
			}
			else if (number==3)
	    	{
	    		cout<<setw(70)<<"***Honda vezel***"<<endl;
	    		cout<<"\n1. Engine : Hybrid engine."<<endl;
	    		cout<<"\n2. Power : 151 horsepower and 140 lb-ft torque."<<endl;
	    		cout<<"\n3. Transmission : Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : 48 mpg city / 47 mpg highway / 48 mpg combined."<<endl;
	    		cout<<"\n5. Price is 5,225,000"<<endl;
	    		break;
			}
			else if (number==4)
	    	{
	    		cout<<setw(70)<<"***Honda BR-V***"<<endl;
	    		cout<<"\n1. Engine : 1.5L 4-cylinder i-VTEC engine."<<endl;
	    		cout<<"\n2. Power : 118 horsepower and 107 lb-ft torque."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual transmission,"<<endl;
	    		cout<<"\n4. Fuel economy : 16.0 km/liter (37.7 miles per gallon)."<<endl;
	    		cout<<"\n5. Price is 3.3 million "<<endl;
	    		break;
			}
			else if (number=5)
	    	{
	    		cout<<setw(70)<<"***Honda HR-V***"<<endl;
	    		cout<<"\n1. Engine : 1.8-liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 141 horsepower and 127 lb-ft of torque."<<endl;
	    		cout<<"\n3. Transmission : Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : 27 mpg in the city and 31 mpg on the highway AWD."<<endl;
	    		cout<<"\n5. Price is 6.5 million"<<endl;
	    		break;
			}
		}
	
    }
    else if (choose==3)
    {
    	cout<<"In suzuki we have five best cars which is very luxrury and comfortable"<<endl;
    	cout<<"\n1. Suzuki Alto"<<"\t\t"<<"2. Suzuki Cultus"<<endl;
		cout<<"\n3. Suzuki Wagon R"<<"\t"<<"4. Suzuki Swift"<<"\n";
	    cout<<"\n5. Suzuki Bolan"<<"\t"<<endl;
	    
	    //declare integer datatype for number 
	    int number;
	    
	    //This loop for if user enter wrong nummber then ask user again enter a number 
	    for (int i=0;i<1;i--)
	    {
	    	cout<<"\nEnter a number between 1 to 5 :";
	        cin>>number;
	        
	        system("CLS");//new page
	    
	        //using if else condition for cars 
	    	if (number==1)
	    	{
	    		cout<<setw(70)<<"***Suzuki Alto***"<<endl;
	    		cout<<"\n1. Engine : 660cc petrol engine."<<endl;
	    		cout<<"\n2. Power : 39 horsepower and 54 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual transmission."<<endl;
	    		cout<<"\n4. Fuel economy : 37 km/liter (87 miles per gallon) for the manual transmission."<<endl;
	    		cout<<"\n5. Price is 1,593,000"<<endl;
	    		break;
			}
			else if (number==2)
	    	{
	    		cout<<setw(70)<<"***Suzuki Cultus***"<<endl;
	    		cout<<"\n1. Engine : 1.3 liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Transmission : Manual transmissions."<<endl;
	    		cout<<"\n3. Fuel Efficiency : 18-20 km/liter."<<endl;
	    		cout<<"\n4. Safety Features : Front and rear seatbelts, airbags, ABS brakes, and a brake override system."<<endl;
	    		cout<<"\n5. Price is 2,220,000"<<endl;
	    		break;
			}
			else if (number==3)
	    	{
	    		cout<<setw(70)<<"***Suzuki Wagon R***"<<endl;
	    		cout<<"\n1. Engine : 1.0-liter three-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Transmission : Automatic continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n3. Fuel economy : 1.0-liter engine returns up to 22 km/l."<<endl;
	    		cout<<"\n4. Safety Features : Dual airbags, ABS with EBD, and seatbelts with pre-tensioners and force limiters."<<endl;
	    		cout<<"\n5. Price is 2.0 million"<<endl;
	    		break;
			}
			else if (number==4)
	    	{
	    		cout<<setw(70)<<"***Suzuki Swift***"<<endl;
	    		cout<<"\n1. Engine : 1.2-liter four-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Transmission : Six-speed automatic transmission"<<endl;
	    		cout<<"\n3. Fuel economy : The 1.2-liter engine delivers a mileage of up to 23 km/l."<<endl;
	    		cout<<"\n4. Safety Features : Such as dual airbags, ABS with EBD, brake assist, hill hold control, and seatbelts."<<endl;
	    		cout<<"\n5. Price is 2.4 million "<<endl;
	    		break;
			}
			else if (number==5)
	    	{
	    		cout<<setw(70)<<"***Suzuki Bolan***"<<endl;
	    		cout<<"\n1. Engine : 796cc petrol engine."<<endl;
	    		cout<<"\n2. Power : 37 horsepower and 62 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 4-speed manual transmission."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 12 km/liter."<<endl;
	    		cout<<"\n5. Price is 1,124,000 "<<endl;
	    		break;
			}
		}
	}
	else if (choose==4)
	{
		cout<<"In toyota we have five best cars which is very luxrury and comfortable"<<endl;
		cout<<"\n1. Toyota Corolla"<<"   2. Toyota Fortuner"<<"\n";
	    cout<<"\n3. Toyota Hilux"<<"\t"<<"    4. Toyota Aqua"<<"\n";
		cout<<"\n5. Toyota Land Cruiser"<<"\n";
		
		//declare integer datatype for number 
		int number;
	    
	    //This loop for if user enter wrong nummber then ask user again enter a number 
	    for (int i=0;i<1;i--)
	    {
	    	cout<<"\nEnter a number between 1 to 5 :";
	        cin>>number;
	        
	        system("CLS");//new page
	        
	        //using if else condition for cars 
	    	if (number==1)
	    	{
	    		cout<<setw(70)<<"***Toyota Corolla***"<<endl;
	    		cout<<"\n1. Engine : 1.8-liter four-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Power : 121-138 horsepower and 154-173 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual or continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 12-15 km/liter"<<endl;
	    		cout<<"\n5. Price is 6,649,000"<<endl;
	    		break;
			}
			else if (number==2)
	    	{
	    		cout<<setw(70)<<"***Toyota Fortuner***"<<endl;
	    		cout<<"\n1. Engine : 2.7-liter petrol engine."<<endl;
	    		cout<<"\n2. Power : 164 horsepower and 245 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual or 6-speed automatic transmission."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 8-10 km/liter."<<endl;
	    		cout<<"\n5. Price is 9,000,000"<<endl;
	    		break;
			}
			else if (number==3)
	    	{
	    		cout<<setw(70)<<"***Toyota Hilux***"<<endl;
	    		cout<<"\n1. Engine : 2.4-liter diesel engine."<<endl;
	    		cout<<"\n2. Power : 147 horsepower and 343 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual or automatic transmission."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 8-12 km/liter."<<endl;
	    		cout<<"\n5. Price is 9,649,000"<<endl;
	    		break;
			}
			else if (number==4)
	    	{
	    		cout<<setw(70)<<"***Toyota Aqua***"<<endl;
	    		cout<<"\n1. Engine : 1.5-liter gasoline engine."<<endl;
	    		cout<<"\n2. Power : 99 horsepower."<<endl;
	    		cout<<"\n3. Transmission : Continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 20-35 km/liter."<<endl;
	    		cout<<"\n5. Price is 3,700,000"<<endl;
	    		break;
			}
			else if (number==5)
	    	{
	    		cout<<setw(70)<<"***Toyota Land Cruiser***"<<endl;
	    		cout<<"\n1. Engine : 5.7-liter V8 engine with 381 horsepower."<<endl;
	    		cout<<"\n2. Transmission : 8-speed automatic transmission with sequential shift mode."<<endl;
	    		cout<<"\n3. Seating Capacity : Eight passengers."<<endl;
	    		cout<<"\n4. Safety Features : Toyota Safety pedestrian detection, automatic high beams, and dynamic radar cruise."<<endl;
	    		cout<<"\n5. Price is 6.5 million"<<endl;
	    		break;
			}
		}
	}
	else
	{
		cout<<"You are enter wrong number or character "<<endl;
	}
}
}

//This user define function using for billing 
int purchasing(string& z,string& model,int& year,string& cc,long int& price1)
{
	cout<<setw(80)<<"**Please enter your information for buying a car**"<<endl;
   
//	string name;
//	long long int phone=0;
//	long long int CNIC=0;
//	
//	ifstream user_o("personal.txt");
//	
//	while(!user_o.eof())
//	{
//		cout<<"User name is "<<name<<endl;
//	    cout<<"Phone number is :"<<phone<<endl;
//	    cout<<"CNIC number is :"<<CNIC<<endl;
//	}

//ifstream fin("patient.txt");
//	if(fin.is_open())
//	{
//		char c;
//		while (!fin.eof())
//		{
//			fin>>noskipws>>c;
//			cout<<c;
//		}
//	}
   
    //declare string datatype for name 
    string name;
	cout<<"Enter your name :";
	cin.ignore();
	getline(cin,name);
	
	long int phone;//declare long int datatype for phone number 
	cout<<"\nEnter your phone number :";
	cin>>phone; 
	
	long int CNIC;//declare long int datatype for id card number 
	cout<<"\nEnter our CNIC number :";
	cin>>CNIC;
    
	string address;//declare string datatype for address of user
	cout<<"\nEnter your address :";
	cin>>address;
	
	string email;//declare string datatype for email
	cout<<"\nEnter your email :";
	cin>>email;
	
	system("CLS");//new page
	
	cout<<setw(60)<<"**Vehicle information**"<<endl;//show on console
	
	cout<<"Make is : "<<z<<endl;
	
	cout<<"\nModel : "<<model<<endl;

	cout<<"\nWhich year model : "<<year<<endl;
	
	cout<<"\nEngine : "<<cc<<endl;
	
	
	cout<<setw(70)<<"\n                                     **Payment of car**"<<endl;
	
	
	int pay;//declare int datatype for pay 
	cout<<"\nEnter payment method Cash, Check or Credit Card : ";
	cin>>pay;
	
	cout<<"\nCar price is : "<<price1<<endl;
	
	long double discount;//declare long double for discount
	discount=price1*15/100;
	
	long int total_p;//declare long int for total payment
	total_p=price1-discount;
	
	long long int sales_T;//declare long long int for sales tax
	sales_T=price1*5/100;
	
	long int l_charges;//declare long int for labor charges
	l_charges=2000;
	
	long int all_total;//declare long int for final total of car
	all_total=total_p+sales_T+l_charges;

    //print these all statement on console 
	cout<<"\nCar warrenty is 1 year"<<endl;
	cout<<"\nDiscount is 15% "<<endl;
	cout<<"\nLabor charges : "<<l_charges<<endl;
	cout<<"\nSales tax : "<<sales_T<<endl;
	cout<<"\nTotal price is : "<<all_total<<endl;
	
	cout<<setw(80)<<"\n***Thank you for purchasing car from our showroom***"<<endl;
}

//using this function for user enter budget in this fuction high price cars
int range_of_user1(int range)
{
    //using if else condition for range 
	if (range>=10000000 && range<=54000000)
	{
		cout<<setw(80)<<"**In this budget we have mercedes cars**"<<endl;
		
		cout<<"\n1.Mercedes-Benz A-Class Sedan (Price is 12,000,000)"<<"\t"<<"2.Mercedes-Benz C-Class C 200 (Price is 14,500,000)"<<endl;
		cout<<"\n3.Mercedes-Benz E-Class E 300 (Price is 25 million)"<<"\t"<<"4.Mercedes-Benz S-Class S 450 (Price is PKR 54 million)"<<"\n";
	    cout<<"\n5.Mercedes-Benz GLA 250 (Price is 10.6 million)"<<endl;
	    
	    //declare integer datatype for number
	    int number;
	    cout<<"\nEnter a number between 1 to 5 :";
	    cin>>number;
	    
	    system("CLS");//new page
	    
	    int array[6]={0,1,2,3,4,5};//using array for cars selection
	    
	    //using for loop 
	    for (int i=number;i<6;i++)
	    {
	        //using if else condition 
	    	if (array[i]==array[1])
	    	{
	    		cout<<setw(70)<<"***Mercedes-Benz A-Class sedan***"<<endl;
	    		cout<<"\n1.Engine : 2.0-liter turbocharged four-cylinder engine that produces 188 horsepower."<<endl;
	    		cout<<"\n2.Transmission : 7-speed dual-clutch automatic transmission as standard."<<endl;
	    		cout<<"\n3.Fuel economy : 24-27 miles per gallon in the city and 33-36 miles per gallon on the highway."<<endl;
	    		cout<<"\n4.Safety features : Adaptive cruise control, automatic emergency braking, and a rearview camera"<<endl;
	    		cout<<"\n5.Price is 12,000,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    	    int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car 
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	        
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	                string  z="Mercedes-Benz";
	    	        string model="A-Class Sedan";
	    	        int year=2018;
	    	        string cc="2.0-liter turbocharged four-cylinder engine";
	    	        long int price1=12000000;
	    	        purchasing(z,model,year,cc,price1);
	    	             
	    	}
		        else if (choice1 == 2)
		        {
			        range_of_user1 (range);
		        }
		        break;
			}
			else if (array[i]==array[2])
	    	{
	    		cout<<setw(70)<<"***Mercedes-Benz C-Class C 200***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine that produces 201 horsepower."<<endl;
	    		cout<<"\n2. Transmission : 9-speed automatic transmission with shift paddles for manual control."<<endl;
	    		cout<<"\n3. Speed : Accelerate from 0-60 mph in 7.1 seconds and has a top speed of 130 mph."<<endl;
	    		cout<<"\n4. Fuel economy : 24 mpg in the city and 33 mpg on the highway."<<endl;
	    		cout<<"\n5. Price is 14,500,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	         	int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car 
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
                
                //using if else condition for confirm and again
 	            if (choice1 == 1)
	            {
	            	string z="Mercedes-Benz";
	    	        string model="C-Class C 200";
	    	        int year=2018;
	    	        string cc="2.0-liter turbocharged 4-cylinder engine";
	                long int price1=14500000;
					     	        
	    	        purchasing(z,model,year,cc,price1);
	
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user1 (range);
		        }
		        break;
			    }
			else if (array[i]==array[3])
	    	{
	    		cout<<setw(70)<<"***Mercedes-Benz E-Class e 300***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 241 horsepower"<<endl;
	    		cout<<"\n3. Transmission : 9-speed automatic transmission with paddle shifters"<<endl;
	    		cout<<"\n4. Seating Capacity : 5"<<endl;
	    		cout<<"\n5. Price is 25 million"<<endl;
	    		
	    		//declare integer datatype for choice 
			    int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page 
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Mercedes-Benz";
	    	        string model="E-Class E 300";
	    	        int year=2018;
	    	        string cc="2.0-liter turbocharged 4-cylinder engine";
	    	        long int price1=20500000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user1 (range);
		        }
		        break;
			    }
			else if (array[i]==array[4])
	    	{
	    		cout<<setw(70)<<"***Mercedes-Benz S-Class S 450***"<<endl;
	    		cout<<"\n1. Engine : 3.0-liter turbocharged V6 engine."<<endl;
	    		cout<<"\n2. Power : 362 horsepower"<<endl;
	    		cout<<"\n3. Transmission : 9-speed automatic transmission with paddle shifters"<<endl;
	    		cout<<"\n4. Seating Capacity : 5"<<endl;
	    		cout<<"\n5. Price is 54 million"<<endl;
	    		
	    		//declare integer datatype for choice 
	    	    int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Mercedes-Benz";
	    	        string model="S-Class S 450";
	    	        int year=2018;
	    	        string cc="3.0-liter turbocharged V6 engine";
	    	        long int price1=50400000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user1 (range);
		        }
		        break;
		     	}
		    else if (array[i]==array[5])
	    	{
	    		cout<<setw(70)<<"***Mercedes-Benz GLA 250***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter turbocharged 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 221 horsepower."<<endl;
	    		cout<<"\n3. Transmission : 8-speed dual-clutch automatic transmission with paddle shifters."<<endl;
	    		cout<<"\n4. Fuel Efficiency : EPA-estimated 25 mpg city/34 mpg highway (FWD)."<<endl;
	    		cout<<"\n5. Price is 10.6 million"<<endl; 
	    		
	    		//declare integer datatype for choice 
	    	    int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Mercedes-Benz";
	    	        string model="GLA 250";
	    	        int year=2018;
	    	        string cc="2.0-liter turbocharged 4-cylinder engine";
	    	        long int price1=10600000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user1 (range);
		        }
		        break;
			    }
		}
	}
}

//using this function for user enter budget in this fuction intermediate price cars
int range_of_user2 (int range)

{
	if (range>=5000000 && range<=9000000)
	{
		cout<<setw(80)<<"***In this budget we have intermediate cars***"<<endl;
		
		cout<<"\n1. Honda vezel"<<"\t"<<"        2. Honda HR-V"<<"\n";
	    cout<<"\n3. Toyota Land Cruiser"<<"\t"<<"4. Toyota Corolla"<<"\n";
		cout<<"\n5. Toyota Fortuner"<<"\t"<<"6. Toyota Hilux"<<endl;
		
		//declare integer datatype for number
		int number;
	    cout<<"\nEnter a number between 1 to 6 :";
	    cin>>number;
	    
	    system("CLS");//new page
	    
	    int array[7]={0,1,2,3,4,5,6};//using array for cars selection 
	    
	    for (int i=number;i<7;i++)
	    {
		    if (array[i]==array[1])
	    	{
	    		cout<<setw(70)<<"***Honda vezel***"<<endl;
	    		cout<<"\n1. Engine : Hybrid engine."<<endl;
	    		cout<<"\n2. Power : 151 horsepower and 140 lb-ft torque."<<endl;
	    		cout<<"\n3. Transmission : Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : Hybrid engine with e-CVT: 48 mpg city / 47 mpg highway."<<endl;
	    		cout<<"\n5. Price is 5,225,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Honda";
	    	        string model="Vezel";
	    	        int year=2018;
	    	        string cc="151 horsepower and 140 lb-ft torque";
	    	        long int price1=5225000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	       
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user2 (range);
		        }
		        break; 
			}
	    
		    else if (array[i]=array[2])
	    	{
	    		cout<<setw(70)<<"***Honda HR-V***"<<endl;
	    		cout<<"\n1. Engine : 1.8-liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Power : 141 horsepower and 127 lb-ft of torque."<<endl;
	    		cout<<"\n3. Transmission :  Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : 27 mpg in the city and 31 mpg on the highway for AWD."<<endl;
	    		cout<<"\n5. Price is 6.5 million"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Honda";
	    	        string model="HR-V";
	    	        int year=2018;
	    	        string cc="1.8-liter 4-cylinder engine";
	    	        long int price1=6500000;
	    	        
	    	        purchasing(z,model,year,cc,price1);   
	    	        
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user2 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[3])
	    	{
	    		cout<<setw(70)<<"***Toyota Land Cruiser***"<<endl;
	    		cout<<"\n1. Engine : 5.7-liter V8 engine with 381 horsepower."<<endl;
	    		cout<<"\n2. Transmission : 8-speed automatic transmission with sequential shift mode."<<endl;
	    		cout<<"\n3. Seating Capacity : Up to eight passengers."<<endl;
	    		cout<<"\n4. Safety Features : Pedestrian detection, lane departure alert, and dynamic radar cruise control, among other features."<<endl;
	    		cout<<"\n5. Price is 6.5 million"<<endl;
	    		
	    		//declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Toyota";
	    	        string model="Land Cruiser";
	    	        int year=2018;
	    	        string cc="5.7-liter V8 engine with 381 horsepower";
	    	        long int price1=6500000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        
		        }
		        else if (choice1 == 2)
		        {
			        range_of_user2 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[4])
	    	{
	    		cout<<setw(70)<<"***Toyota Corolla***"<<endl;
	    		cout<<"\n1. Engine : 1.8-liter four-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Power : 138 horsepower and 173 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : Continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 12-15 km/liter"<<endl;
	    		cout<<"\n5. Price is 6,649,000"<<endl;
	    		
	    		//declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	              
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Toyota";
	    	        string model="Corolla";
	    	        int year=2018;
	    	        string cc="1.8-liter four-cylinder petrol engine";
	    	        long int price1=6649000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	       
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user2 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[5])
	    	{
	    		cout<<setw(70)<<"***Toyota Fortuner***"<<endl;
	    		cout<<"\n1. Engine : 2.7-liter petrol engine."<<endl;
	    		cout<<"\n2. Power : 164 horsepower and 245 Nm of torque,"<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual or 6-speed automatic transmission"<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy around 8-10 km/liter"<<endl;
	    		cout<<"\n5. Price is 9,000,000"<<endl;
	    		
	    		//declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Toyota";
	    	        string model="Fortuner";
	    	        int year=2018;
	    	        string cc="2.7-liter petrol engine";
	    	        long int price1=9000000; 
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user2 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[6])
	    	{
	    		cout<<setw(70)<<"***Toyota Hilux***"<<endl;
	    		cout<<"\n1. Engine : 2.4-liter diesel engine."<<endl;
	    		cout<<"\n2. Power : 147 horsepower and 343 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual or automatic transmission."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 8-12 km/liter "<<endl;
	    		cout<<"\n5. Price is 9,649,000"<<endl;
	    		
	    		//declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Toyota";
	    	        string model="Hilux";
	    	        int year=2018;
	    	        string cc="2.4-liter diesel engine";
	    	        long int price1=9649000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user2 (range);
		        }
		        break;
			    
			}
	    }
	}
}
 
//using this function for user enter budget in this fuction low price cars 
int range_of_user3 (int range)

{
    if (range>=1000000 && range<5000000)
	{
		cout<<setw(80)<<"**In this budget we have low price cars**"<<endl;
	
    	cout<<"\n1. Suzuki Alto (price is 1,593,000)"<<"\t"<<"    2. Suzuki Cultus price is 2,220,000)"<<endl;
		cout<<"\n3. Suzuki Wagon R (price is 2.0 million)"<<"    4. Suzuki Swift (price is 2.4 million)"<<"\n";
	    cout<<"\n5. Suzuki Bolan (price is 1,124,000)"<<"\t"<<"    6. Honda Civic (price is 4,699,000)"<<endl;
    	cout<<"\n7. Honda City (price is 3,049,000)"<<"\t"<<"    8. Honda BR-V (price is 3.3 million)"<<endl;
		cout<<"\n9. Toyota Aqua (price is 3,700,000)"<<endl;
	    
		//declare integer datatype for number
		int number;
	    cout<<"\nEnter a number between 1 to 9 :";
	    cin>>number;
	    
	    system("CLS");//new page
	    
	    int array[10]={0,1,2,3,4,5,6,7,8,9};//using array for cars selection
	    
	    for (int i=number;i<10;i++)
	    {
			if (array[i]==array[1])
	    	{
	    		cout<<setw(70)<<"***Suzuki Alto***"<<endl;
	    		cout<<"\n1. Engine : 660cc petrol engine."<<endl;
	    		cout<<"\n2. Power : 39 horsepower and 54 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual transmission."<<endl;
	    		cout<<"\n4. Fuel economy : up to 37 km/liter (87 miles per gallon) for the manual transmission"<<endl;
	    		cout<<"\n5. Price is 1,593,000"<<endl;
	    	    
	    	    //declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Suzuki";
	    	        string model="Alto";
	    	        int year=2018;
	    	        string cc="660cc petrol engine";
	    	        long int price1=1593000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[2])
	    	{
	    		cout<<setw(70)<<"***Suzuki Cultus***"<<endl;
	    		cout<<"\n1. Engine : 1.3 liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Transmission : Automatic transmissions."<<endl;
	    		cout<<"\n3. Fuel Efficiency : Fuel efficiency of approximately 18-20 km/liter."<<endl;
	    		cout<<"\n4. Safety Features : Front and rear seatbelts, airbags, ABS brakes, and a brake override system."<<endl;
	    		cout<<"\n5. Price is 2,220,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Suzuki";
	    	        string model="Cultus";
	    	        int year=2018;
	    	        string cc="1.3 liter 4-cylinder engine";
	    	        long int price1=2220000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	            	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[3])
	    	{
	    		cout<<setw(70)<<"***Suzuki Wagon R***"<<endl;
	    		cout<<"\n1. 1.0-liter three-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Transmission : Automatic continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n3. Fuel economy : Mileage of up to 27 km/l."<<endl;
	    		cout<<"\n4. Safety Features: Safety features such as dual airbags, ABS, and seatbelts and force limiters."<<endl;
	    		cout<<"\n5. Price is 2.0 million"<<endl;
	    		
	    		//declare integer datatype for choice 
	    	    int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Suzuki";
	    	        string model="Wagon R";
	    	        int year=2018;
	    	        string cc="1.0-liter three-cylinder petrol engine";
	    	        long int price1=2000000;
	    	        
	    	        purchasing(z,model,year,cc,price1);	    	        
	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[4])
	    	{
	    		cout<<setw(70)<<"***Suzuki Swift***"<<endl;
	    		cout<<"\n1. Engine : 1.2-liter four-cylinder petrol engine."<<endl;
	    		cout<<"\n2. Transmission : Five-speed manual or a six-speed automatic transmission."<<endl;
	    		cout<<"\n3. Fuel economy : The 1.2-liter engine delivers a mileage of up to 23 km/l."<<endl;
	    		cout<<"\n4. Safety Features : Such as dual airbags, ABS, brake assist, hill hold control, and seatbelts."<<endl;
	    		cout<<"\n5. Price is 2.4 million"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Suzuki";
	    	        string model="Swift";
	    	        int year=2018;
	    	        string cc="1.2-liter four-cylinder petrol engine";
	    	        long int price1=2400000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[5])
	    	{
	    		cout<<setw(70)<<"***Suzuki Bolan***"<<endl;
	    		cout<<"\n1. Engine : 796cc petrol engine."<<endl;
	    		cout<<"\n2. Power : 37 horsepower and 62 Nm of torque."<<endl;
	    		cout<<"\n3. Transmission : 4-speed manual transmission."<<endl;
	    		cout<<"\n4. Fuel economy : Fuel economy of around 12 km/liter."<<endl;
	    		cout<<"\n5. Price is 1,124,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Suzuki";
	    	        string model="Bolan";
	    	        int year=2018;
	    	        string cc="796cc petrol engine";
	    	        long int price1=1124000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[6])
	    	{
	    		cout<<setw(70)<<"***Honda Civic***"<<endl;
	    		cout<<"\n1. Engine : 2.0-liter 4-cylinder engine."<<endl;
	    		cout<<"\n2. Horsepower : 158 hp (2.0L engine)."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual or Continuously Variable Transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy : 30 mpg city, 38 mpg highway (2.0L engine with CVT)."<<endl;
	    		cout<<"\n5. Price is 4,699,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Honda";
	    	        string model="Civic";
	    	        int year=2018;
	    	        string cc="2.0-liter 4-cylinder engine";
	    	        long int price1=4699000;
	    	        
	    	        purchasing(z,model,year,cc,price1);	    	        
	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[7])
	    	{
	    		cout<<setw(70)<<"***Honda City***"<<endl;
	    		cout<<"\n1. Engine : 1.5L i-VTEC petrol engine."<<endl;
	    		cout<<"\n2. Power : 118 horsepower and 145 Nm torque."<<endl;
	    		cout<<"\n3. Transmission : 5-speed manual"<<endl;
	    		cout<<"\n4. 17.8 km/L (city/highway combined)."<<endl;
	    		cout<<"\n5. Price is 3,049,000"<<endl;
	    		
	    		//declare integer datatype for choice 
				int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Honda";
	    	        string model="City";
	    	        int year=2018;
	    	        string cc="1.5L 4-cylinder i-VTEC engine";
	    	        long int price1=3049000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	        	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[8])
	    	{
	    		cout<<setw(70)<<"***Honda BR-V***"<<endl;
	    		cout<<"\n1. Engine : 1.5L 4-cylinder i-VTEC engine."<<endl;
	    		cout<<"\n2. Power : 118 horsepower and 107 lb-ft torque."<<endl;
	    		cout<<"\n3. Transmission : 6-speed manual transmission"<<endl;
	    		cout<<"\n4. Fuel economy : 16.0 km/liter (37.7 miles per gallon)."<<endl;
	    		cout<<"\n5. Price is 3.3 million"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Honda";
	    	        string model="BR-V";
	    	        int year=2018;
	    	        string cc="1.5L 4-cylinder i-VTEC engine";
	    	        long int price1=3300000;
	    	        
	    	        purchasing(z,model,year,cc,price1);
	    	             
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
			else if (array[i]==array[9])
	    	{
	    		cout<<setw(70)<<"***Toyota Aqua***"<<endl;
	    		cout<<"\n1. Engine : 1.5-liter gasoline engine."<<endl;
	    		cout<<"\n2. Power : 99 horsepower."<<endl;
	    		cout<<"\n3. Transmission: Continuously variable transmission (CVT)."<<endl;
	    		cout<<"\n4. Fuel economy: Fuel economy of around 20-35 km/liter."<<endl;
	    		cout<<"\n5. Price is 3,700,000"<<endl;
	    		
	    		//declare integer datatype for choice 
	    		int choice1;
	            cout<<"\nEnter 1 for confirm this car :"<<endl;//1 for confirm car
	            cout<<"\nEnter 2 for for choose again car :"<<endl;//2 for again selecting car
	            cin>>choice1;
	            
	            system("CLS");//new page
	            
	            //using if else condition for confirm and again
	            if (choice1 == 1)
	            {
	    	        string  z="Toyota";
	    	        string model="Aqua";
	    	        int year=2018;
	    	        string cc="1.5-liter gasoline engine";
	    	        long int price1=3700000;
	    	        
	    	        purchasing(z,model,year,cc,price1);	    	        
	    	        
		        }
		        else if (choice1 == 2)
		        {
			       range_of_user3 (range);
		        }
		        break;
			    
			}
	    }
	}
}

int main()
{
	w_c();
	
	user_profile();
	
	intro();

	choosen();
	
	int choice;
	cout<<"\nEnter your choice 1,2,3 or 4 :";
	cin>>choice;
	
	system("CLS");
	
	choose(choice);
	
	int range;
	cout<<"\nEnter your budget for car :";
	cin>>range;
	
	system("CLS");
	
	range_of_user1 (range);
    range_of_user2 (range);
    range_of_user3 (range);
	
}
