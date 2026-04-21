#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){ 
    double weight;
    int choice;
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string CYAN = "\033[36m";
const string RESET = "\033[0m";
cout<<BLUE<<"==========================================="<<RESET<<endl;
cout<<GREEN<<"Let's see your weight on different planets!"<<RESET<<endl;
cout<<BLUE<<"==========================================="<<RESET<<endl;
cout<<"Enter your weight on Earth(KG): ";
cin>>weight;
cout<<fixed<<setprecision(2);
do{
  cout<<YELLOW<<"1.Mercury | 2.Venus | 3.Earth | 4.Mars | 5.Jupiter | 6.Saturn | 7.Uranus | 8.Neptune | 9.Exit "<<RESET<<endl;
cin>>choice;
if(choice == 9){
cout<<CYAN<<"Goodbye Astronaut! See you in Space."<<RESET<<endl;
break;
}
switch (choice){
case 1:
cout<<"Your weight on Mercury is: "<<weight*0.38<<" KG"<<endl;
break;
case 2:
cout<<"Your weight on Venus is: "<<weight*0.91<<" KG"<<endl;
break;
case 3:
cout<<"Your weight on Earth is: "<<weight*1.00<<" KG"<<endl;
break;
case 4:
cout<<"Your weight on Mars is: "<<weight*0.38<<" KG"<<endl;
break;
case 5:
cout<<"Your weight on Jupiter is: "<<weight*2.53<<" KG"<<endl;
break;
case 6:
cout<<"Your weight on Saturn is: "<<weight*1.06<<" KG"<<endl;
break;
case 7:
cout<<"Your weight on Uranus is: "<<weight*0.89<<" KG"<<endl;
break;
case 8:
cout<<"Your weight on Neptune is: "<<weight*1.41<<" KG"<<endl;
break;
default:
cout<<RED<<"Invalid Option! Space is big, but not that big."<<RESET<<endl;   
break;
} 
cout<<"Choose another planet(or 9 to Exit): ";
}while (choice != 9);
    return 0;
}
