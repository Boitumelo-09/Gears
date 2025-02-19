/*
Write a C++ program that:
a)	Continuously takes the speed of the car as input until the user decides to terminate the program.
b)	Determines and displays the appropriate gear based on the given speed.
c)	Handles edge cases, including invalid speeds (such as speeds less than 0 or greater than 120).
d)	Allows the user to terminate the program by pressing any key.


3.	You are tasked with creating a C++ program to automate the gear shifting of a car based on its speed. The following gear and speed ranges are given:
•	Gear 1: Speed from 0 to 20 km/h  speed
•	Gear 2: Speed from 20 to 40 km/h
•	Gear 3: Speed from 40 to 60 km/h
•	Gear 4: Speed from 60 to 80 km/h
•	Gear 5: Speed from 80 to 120 km/h

*/
#include<iostream>
#include<string>
  int main(){
    typedef std::string text_t;
    typedef int values_t;
    typedef char options_t;
  system("cls");
  options_t option;
    text_t username;
    values_t speedOfCar, driversLicenceCode,codeLimit;
      std::cout<<"****************";
          std::cout<<std::endl;
std::cout<<"Hello Driver!!!!";
    std::cout<<std::endl;
       
       std::cout<<"Enter your drivername:";
             getline(std::cin, username);
        system("cls");
             std::cout<<"ENTER YOUR DRIVERS LICENCE 4-DIGIT CODE:";
         std::cin>>driversLicenceCode;
   system("cls");
   while ((driversLicenceCode<=1000 || driversLicenceCode>=9999)&&codeLimit<3)
   {  
     std::cout<<"ACCESS DENIED"<<std::endl;
     std::cout<<"ENTER YOUR DRIVERS LICENCE 4-DIGIT CODE:";
  std::cin>>driversLicenceCode;
       ++codeLimit;
         system("cls"); 
   }

     if (codeLimit>=3)
     {
         std::cout<<" You HAVE EXCEEDED YOUR PASSWORD ATTEMPTS!!"<<std::endl;
         std::cout<<"................................................."<<std::endl;
           std::cout<<"TRY AGAIN LATERS";
              
            
     }
         else{
              std::cout<<" Access Granted"<<std::endl;
        std::cout<<"................................................."<<std::endl;

         std::cout<<"Hey "<<username<<". Let's Hit The Road!!"<<std::endl; 
           std::cout<<"FOOT ON THE PETAL! LET'S EXAMINE YOUR GEAR POINT!"<<std::endl;
           std::cout<<"................................................."<<std::endl;
                do
                {
                 std::cout<<"ENTER THE SPEED VALUE OR ANY KEY TO GET OUT OF THE CAR:";
                      std::cin>>speedOfCar;
                        
  system("cls");        
     
                if (speedOfCar<=0)
                 {
                std::cout<<"INVALID INPUT "<<username<<std::endl;
                  std::cout<<std::endl; 
                   std::cout<<""<<std::endl;
                   std::cout<<"____________________________"<<std::endl;

                   }
                 if (speedOfCar>120)
                     {
                 std::cout<<" SORRY YOU ARE NOW OUT OF ODER "<<username<<std::endl;
                 std::cout<<"WE DON'T HAVE THE CAPACITY FOR THAT SPEED"<<std::endl; 
                 std::cout<<"GET NEW WHEELZ YO!"<<std::endl;
           std::cout<<"_____________________________________________"<<std::endl;
                            }
               if (speedOfCar<=20 && speedOfCar>0)
               {
                std::cout<<" YOU ARE ON THE FIRST GEAR!! "<<username<<std::endl;
                std::cout<<std::endl; 
                  std::cout<<" That is gear 1"<<std::endl;
                  std::cout<<std::endl;  
                    std::cout<<"That's normally the toddler stage, lol!!"<<std::endl;
                  std::cout<<"_________________________________________"<<std::endl;
               }
                if (speedOfCar<=40 && speedOfCar>=20)
               {
                std::cout<<" YOU ARE ON THE Second GEAR!! "<<username<<std::endl;
                std::cout<<std::endl; 
                  std::cout<<" That is gear 2"<<std::endl; 
                  std::cout<<std::endl; 
                     std::cout<<"That's Not Bad, I could eat a pizza in motion!"<<std::endl;
                  std::cout<<"_____________________________________________"<<std::endl;
               }
                if (speedOfCar<=60 && speedOfCar>=40)
               {
                std::cout<<" YOU ARE ON THE THIRD GEAR!! "<<username<<std::endl;
                std::cout<<std::endl; 
                  std::cout<<" That is gear 3"<<std::endl; 
                  std::cout<<std::endl; 
                     std::cout<<" Slow down my G, Where we goin' yo!, it's getting serious now"<<std::endl;
                  std::cout<<"_________________________________________________"<<std::endl;
                 
               }
                if (speedOfCar<=80 && speedOfCar>=60)
               {
                std::cout<<" YOU ARE ON THE FOURTH GEAR!! "<<username<<std::endl;
                std::cout<<std::endl; 
                  std::cout<<" That is gear 4"<<std::endl; 
                  std::cout<<std::endl; 
                    std::cout<<"Okay that's fast my nigga!, or you a hun? my bad!"<<std::endl;
                  std::cout<<"______________________________________________________"<<std::endl;
               }
                if (speedOfCar<=120 && speedOfCar>=80)
               {
                std::cout<<" YOU ARE ON THE FIfth GEAR!! "<<username<<std::endl;
                std::cout<<std::endl; 
                  std::cout<<" That is gear 5"<<std::endl; 
                  std::cout<<std::endl; 
                     std::cout<<"Damn you're flying man!!"<<std::endl;
                  std::cout<<"_______________________________________________________"<<std::endl;
               }
       
               
                } while (speedOfCar>0 || speedOfCar<0);
                
                std::cout<<"You Are Out Of The Car"<<std::endl;
              }
           
system("pause>nul");
  }

