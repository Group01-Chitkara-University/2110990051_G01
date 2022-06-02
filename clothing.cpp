// Online C++ compiler to run C++ program online
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
class Clothing
{
private:
   char Code[40];
   char Type[40];
   int Size;
   int red;
   char Material[40];
   float Price;
   void Assign()
   {
    if((strcmp(Material,"COTTON")==0)||(strcmp(Material,"cotton")==0)||(strcmp(Material,"Cotton")==0))
      {
	      }
      else
      {
	 if((strcmp(Type,"TROUSER")==0)||(strcmp(Type,"Trouser")==0))
	 {
	    Price=1500;
	    red=(1500*0.25);
	    Price=1500-red;
	 }
	 }
  };
  public:                                             //constructor//
     Clothing()
     {
	strcpy(Code,"NOT ASSIGNED");
	strcpy(Type,"NOT ASSIGNED");
	strcpy(Material,"NOT ASSIGNED");
	Size=0;
	Price=0;
     }
     ~Clothing()                        //destructor//
     {
	cout<<"These are the details of your selected garment.";
     }
     void Input();
     void Display();
};
void Clothing::Input()
{
    cout<<"Enter the Code number here: ";
    cin>>Code;
    cout<<"Enter the Type here: ";
    cin>>Type;
    cout<<"Enter the Size here: ";
    cin>>Size;
    cout<<"Enter the Material here: ";
    cin>>Material;
    Assign();
}
void Clothing::Display()
{
   cout<<endl<<"Following are the garments details:- "<<endl;
   cout<<"Code: "<<Type<<endl;
   cout<<"Size: "<<Size<<endl;
   cout<<"Material: "<<Material<<endl<<endl;
   cout<<"Therefore, the Price is "<<Price<<endl;
}
int main()
{

   Clothing c;
   c.Input();
   c.Display();
   return 0;
}
