#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
void login();
void registration();
void guest();

void login()
{
        int count;
        string username,password,un,pw;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>username;
        cout<<"PASSWORD :";
        cin>>password;
        
        ifstream read("logdetails.txt");
        while(read>>un>>pw)
        {
                if(un==username && pw==password)
        
                {
                        count=1;
                        system("cls");
                }
        }
        read.close();
        if(count==1)
        {
                cout<<"\nHello "<<username<<"\nLOGIN SUCESS\n"<<endl;
				system("PAUSE");
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
				exit(EXIT_FAILURE);
        }
}

void registration()
{
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        
        ofstream reg("logdetails.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
		system("PAUSE"); 
}
void guest()
{
        cout<<"\nWELCOME GUEST\n"; 
}
class menu
{
    public :
    void food();
};
void menu ::food()
{
    system("cls");
    cout<<"\t\t\t====WELCOME TO FOODPANDA====\t\t\t"<<endl;
    int choice;
    cout<<"1.FOOD\n2.DRINKS\n3.EXIT"<<endl;
    cin>> choice;
    if (choice == 1)
    {
        system("cls");
        cout<<" ==============================FOOD MENU ====================================\n\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n[16]EXIT"<<endl;
        cout<<"TO PLACE YOUR ORDER PRESS 1"<<endl;
        int ch;
        cin>> ch;
        if (!ch == 1)
        {
        
            cout<<"INVALID CHOICE!! PLEASE ENTER 1"<<endl;
        }
    }
    else if (choice==2)
    {
        system("cls");
        cout<<"==============================DRINKS MENU ====================================\n\t[1] Blue Angel (Rs.480)\t\t\t\t[2] Dry Martini(Rs.440)\t\t\t\t\t[3] Kamikaze(Rs.580)\n\t[4] White Russian (Rs.520)\t\t\t[5] Alexander (Rs.350)\t\t\t\t\t[6] Cosmopolitan(Rs.400)\n\t[7] Mojito (Rs.420)\t\t\t\t[8] Pina Colada (Rs.540)\t\t\t\t[9] Tequila Sunrise(Rs.548)\n\t[10] Long Island Tea (Rs.390)\t\t\t[11] Americanno(Rs.525)\t\t\t\t\t[12] Espresso(Rs.425)\n\t[13] Cappucinno (Rs.335)\t\t\t[14] Cafe Latte (Rs.324)\t\t\t\t[15] Hot Chocolate(Rs.360)\n[16]EXIT"<<endl;    
        cout<<"TO PLACE YOUR ORDER PRESS 2"<<endl;
        int ch;
        cin>> ch;
        if (!ch == 2)
        {
            cout<<"INVALID CHOICE!! PLEASE ENTER 2"<<endl;
        }
    }
    else if (choice==3)
    {
        system("cls");
        cout<<"THANK YOU FOR VISTING"<<endl;
		exit;
    }
}
class odr:public menu
{
    protected:
    int  qty,itno,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0;
    string y,yes,Y;
    public:
    void order()
    {   
            ofstream write;
            write.open("order.text");
            if(!write)
        {
	        cout<<"file can not open"<<endl;
        }
        int choice;
        cin>> choice;
        if (choice ==1)
        {
            a:
            cout<<"ENTER THE NUMBER OF ITEM YOU WANT TO ORDER (ONE AT A  TIME): "<<endl;
            cin>> itno;
            switch(itno)
                {
   	                case 1:
   		                cout<<"\n\n\t HOW MANY Veggie Supreme YOU WANT :";
   		                cin>>qty;
   		                a=480;
   		                s=s+a*qty;
   		                write<<"YOU ORDER  Veggie Supreme : 480";
   		                write<<" \n";
   		                write<<"NUMBER OF PIZZA IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 2:
   		                cout<<"\n\n\tHOW MANY Exotica YOU WANT :";
   		                cin>>qty;
		                b=440;
   		                s=s+b*qty;
   		                write<<"YOU ORDER  Exotica : 440";
   		                write<<" \n";
   			            write<<"NUMBER OF PIZZA IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 3:
   		                cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		                cin>>qty;
   		                c=580;
   		                s=s+c*qty;
   			            write<<"YOU ORDER  Chicken Sizzler : 580";
   			            write<<" \n";
   			        	write<<"NUMBER OF Chicken Sizzler IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 4:
   		                cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		                cin>>qty;
   		                d=520;
   		                s=s+d*qty;
   		                write<<"YOU ORDER  Chrispy Chicken : 520";
   	                    write<<" \n";
   		                write<<"NUMBER OF Chrispy Chicken IS : "<<qty;
   		                write<<"\n";
	                    cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 5:
   		                cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		                cin>>qty;
   		                e=350;
   		                s=s+e*qty;
   		                write<<"YOU ORDER  Spaghetti : 350";
   		                write<<" \n";
   			            write<<"NUMBER OF Spaghetti IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;

                    case 6:
   		                cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		                cin>>qty;
   	                    f=400;
   		                s=s+f*qty;
   		                write<<"YOU ORDER Country Feast : 400";
   		                write<<"\n ";
   			            write<<"NUMBER OF PIZZA IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 7:
   		                cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		                cin>>qty;
   	                    g=420;
   		                s=s+g*qty;
   		                write<<"YOU ORDER Tetrazzini : 420";
   		                write<<"\n ";
   			            write<<"NUMBER OF Tetrazzini IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                        break;
                    case 8:
   		                cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		                cin>>qty;
   		                h=540;
   		                s=s+h*qty;
   		                write<<"YOU ORDER Double Cheese : 540";
   		                write<<" \n";
   		            	write<<"NUMBER OF PIZZA IS : "<<qty;
   	                	write<<"\n";
                       	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                       	break;
                    case 9:
	                    cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		                cin>>qty;
                    	i=548;
	                	s=s+i*qty;
	                	write<<"YOU ORDER Makizushi : 548";
	                	write<<" \n";
                		write<<"NUMBER OF Makizushi IS : "<<qty;
   	                	write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 10:
   		                cout<<"\n\n\tHOW MANY HAM BURGER YOU WANT :";
   		                cin>>qty;
   		                j=390;
   		                s=s+j*qty;
   	                	write<<"YOU ORDER Ham Burger : 390";
   	                	write<<" \n";
   	            		write<<"NUMBER OF Ham Burger IS : "<<qty;
   	                	write<<"\n";
                    	cout<<"\n\n\n\tYOU ORDER Ham Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                    	break;	
                	case 11:
   		            	cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		                cin>>qty;
   		                k=525;
   		                s=s+k*qty;
   		                write<<"YOU ORDER Margherita : 525";
   		                write<<" \n";
   		            	write<<"NUMBER OF PIZZA IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 12:
   		                cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		                cin>>qty;
   		                l=425;
   	                	s=s+l*qty;
   		                write<<"YOU ORDER Fish 'n' Chips : 425";
                        write<<" \n";
                        write<<"NUMBER OF Fish 'n' Chips IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 13:
   		                cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		                cin>>qty;
   		                m=335;
   		                s=s+m*qty;
   		                write<<"YOU ORDER  Fajitas  : 335";
   		                write<<" \n";
   			            write<<"NUMBER OF Fajitas IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                    	break;
   	                case 14:
   		                cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		                cin>>qty;
   		                n=324;
   		                s=s+n*qty;
   		                write<<"YOU ORDER Tempura : 324";
   		                write<<" \n";
   			            write<<"NUMBER OF Tempura IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 15:
   		                cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		                cin>>qty;
   		                o=360;
   		                s=s+o*qty;
   		                write<<"YOU ORDER  Hot Dog : 360";
   		                write<<"\n ";
   		            	write<<"NUMBER OF Hot Dog IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 16:
   		                cout<<"\n\t\t\t\t\t Brought To You By FOODPANDA ";
   	                    exit(0);
   	                    break;
                    default:
   		                cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		                goto a;
   		                break;
                }
                cout<<"DO YOU WANT TO ADD ANOTHER ITEM(Y/N): "<<endl;
                cin>>yes;
                if (yes == "Y" || yes == "y" )
                    {
                        system("cls");
                        cout<<" ==============================FOOD MENU ====================================\n\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Ham Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n[16]EXIT"<<endl;
                        goto a;
                    }
                    else
                    {     
   	                    cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	                    for(int a=1;a<15;a++)
                        {
                            Sleep(50);
		                    cout << "...";
	                    }
   	                    cout<<"\n\t\t\t\t\t\t\t";
   	                    system("PAUSE");
                    }
        }
        if (choice == 2)
        {
            b:
            cout<<"ENTER THE NUMBER OF ITEM YOU WANT TO ORDER (ONE AT A  TIME): "<<endl;
            cin>> itno;
            switch(itno)
                {
   	                case 1:
   		                cout<<"\n\n\tHOW MANY Blue Angel YOU WANT :";
   		                cin>>qty;
   		                a=480;
   		                s=s+a*qty;
   		                write<<"YOU ORDER  Blue Angel : 480";
   		                write<<" \n";
   		                write<<"NUMBER OF Blue angel IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Blue Angel"<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 2:
   		                cout<<"\n\n\tHOW MANY Dry Martini YOU WANT :";
   		                cin>>qty;
		                b=440;
   		                s=s+b*qty;
   		                write<<"YOU ORDER Dry Martini : 440";
   		                write<<" \n";
   			            write<<"NUMBER OF Dry Martini IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Dry Martini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 3:
   		                cout<<"\n\n\tHOW MANY Kamikaze YOU WANT :";
   		                cin>>qty;
   		                c=580;
   		                s=s+c*qty;
   			            write<<"YOU ORDER  Kamikaze : 580";
   			            write<<" \n";
   			        	write<<"NUMBER OF Kamikaze IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Kamikaze "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 4:
   		                cout<<"\n\n\tHOW MANY White Russian YOU WANT :";
   		                cin>>qty;
   		                d=520;
   		                s=s+d*qty;
   		                write<<"YOU ORDER  White Russian : 520";
   	                    write<<" \n";
   		                write<<"NUMBER OF White Russian IS : "<<qty;
   		                write<<"\n";
	                    cout<<"\n\n\n\tYOU ORDER  White Russian "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 5:
   		                cout<<"\n\n\tHOW MANY Alexander YOU WANT:";
   		                cin>>qty;
   		                e=350;
   		                s=s+e*qty;
   		                write<<"YOU ORDER  Alexander : 350";
   		                write<<" \n";
   			            write<<"NUMBER OF Alexander IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Alexander "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;

                    case 6:
   		                cout<<"\n\n\tHOW MANY Cosmopolitan YOU WANT:";
   		                cin>>qty;
   	                    f=400;
   		                s=s+f*qty;
   		                write<<"YOU ORDER Country Feast : 400";
   		                write<<"\n ";
   			            write<<"NUMBER OF Cosmopolitan IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Cosmopolitan "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 7:
   		                cout<<"\n\n\tHOW MANY Mojito YOU WANT:";
   		                cin>>qty;
   	                    g=420;
   		                s=s+g*qty;
   		                write<<"YOU ORDER Mojito : 420";
   		                write<<"\n ";
   			            write<<"NUMBER OF Mojito IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Mojito "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                        break;
                    case 8:
   		                cout<<"\n\n\tHOW MANY Pina Colada YOU WANT :";
   		                cin>>qty;
   		                h=540;
   		                s=s+h*qty;
   		                write<<"YOU ORDER Pina Colada : 540";
   		                write<<" \n";
   		            	write<<"NUMBER OF Pina Colada IS : "<<qty;
   	                	write<<"\n";
                       	cout<<"\n\n\n\tYOU ORDER   Pina Colada "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                       	break;
                    case 9:
	                    cout<<"\n\n\tHOW MANY Tequila Sunrise YOU WANT :";
   		                cin>>qty;
                    	i=548;
	                	s=s+i*qty;
	                	write<<"YOU ORDER Tequila Sunrise : 548";
	                	write<<" \n";
                		write<<"NUMBER OF Tequila Sunrise IS : "<<qty;
   	                	write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Tequila Sunrise "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 10:
   		                cout<<"\n\n\tHOW MANY HAM Long Island Tea YOU WANT :";
   		                cin>>qty;
   		                j=390;
   		                s=s+j*qty;
   	                	write<<"YOU ORDER Long Island Tea : 390";
   	                	write<<" \n";
   	            		write<<"NUMBER OF Long Island Tea IS : "<<qty;
   	                	write<<"\n";
                    	cout<<"\n\n\n\tYOU ORDER Long Island Tea "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                    	break;	
                	case 11:
   		            	cout<<"\n\n\tHOW MANY Ameriacano YOU WANT :";
   		                cin>>qty;
   		                k=525;
   		                s=s+k*qty;
   		                write<<"YOU ORDER Americano : 525";
   		                write<<" \n";
   		            	write<<"NUMBER OF Americano IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER   Americano "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 12:
   		                cout<<"\n\n\tHOW MANY Espresso YOU WANT :";
   		                cin>>qty;
   		                l=425;
   	                	s=s+l*qty;
   		                write<<"YOU ORDER Espresso : 425";
                        write<<" \n";
                        write<<"NUMBER OF Espresso IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Espresso "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 13:
   		                cout<<"\n\n\tHOW MANY Cappucinno YOU WANT :";
   		                cin>>qty;
   		                m=335;
   		                s=s+m*qty;
   		                write<<"YOU ORDER  Cappucino  : 335";
   		                write<<" \n";
   			            write<<"NUMBER OF Cappuciano IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER Cappucino "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
                    	break;
   	                case 14:
   		                cout<<"\n\n\tHOW MANY Cafe Latte YOU WANT :";
   		                cin>>qty;
   		                n=324;
   		                s=s+n*qty;
   		                write<<"YOU ORDER Cafe Latte : 324";
   		                write<<" \n";
   			            write<<"NUMBER OF Cafe Latte IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Cafe Latte "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
   	                case 15:
   		                cout<<"\n\n\tHOW MANY Hot Chocoalte YOU WANT :";
   		                cin>>qty;
   		                o=360;
   		                s=s+o*qty;
   		                write<<"YOU ORDER  Hot Chocolate : 360";
   		                write<<"\n ";
   		            	write<<"NUMBER OF Hot Chocolate IS : "<<qty;
   		                write<<"\n";
   	                    cout<<"\n\n\n\tYOU ORDER  Hot Chocolate "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	                    break;
                    case 16:
   		                cout<<"\n\t\t\t\t\t Brought To You By FOODPANDA";
   	                    exit(0);
   	                    break;
                    default:
   		                cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		                goto b;
   		                break;
                }
                    cout<<"DO YOU WANT TO ADD ANOTHER ITEM(Y/N): "<<endl;
                    cin>>yes;
                    if (yes == "Y" || yes == "y" )
                    {
                        system("cls");
                        cout<<"==============================DRINKS MENU ====================================\n\t[1] Blue Angel (Rs.480)\t\t\t\t[2] Dry Martini(Rs.440)\t\t\t\t\t[3] Kamikaze(Rs.580)\n\t[4] White Russian (Rs.520)\t\t\t[5] Alexander (Rs.350)\t\t\t\t\t[6] Cosmopolitan(Rs.400)\n\t[7] Mojito (Rs.420)\t\t\t\t[8] Pina Colada (Rs.540)\t\t\t\t[9] Tequila Sunrise(Rs.548)\n\t[10] Long Island Tea (Rs.390)\t\t\t[11] Americanno(Rs.525)\t\t\t\t\t[12] Espresso(Rs.425)\n\t[13] Cappucinno (Rs.335)\t\t\t[14] Cafe Latte (Rs.324)\t\t\t\t[15] Hot Chocolate(Rs.360)\n[16]EXIT"<<endl;
                        goto b;
                    }
                    else
                    {     
   	                    cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	                    for(int a=1;a<15;a++)
                        {
                            Sleep(50);
		                    cout << "...";
	                    }
   	                    cout<<"\n\t\t\t\t\t\t\t";
   	                    system("PAUSE");
                    }
        }   
                    system("cls");
                        string address;
                        cout<<"ENTER THE DELIVERY ADDRESS: "<<endl;
                        cin>> address;   
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  FOODPANDA01"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
                        cout<< "Your order is on the way to be delivered to your address "<<address<<"\n... Thank you for ordering on FOODPANDA.. " <<endl;
                        write.close();
    }
};
int main()
{
    system("cls");
    cout<<"WELCOME TO FOOD PANDA"<<endl;
    system("PAUSE");
    system("cls");
     int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.CONTINUE AS GUEST"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registration();
                        break;
                case 3:
                        guest();
                        break;
                case 4:

                        cout<<"Thanks for using this program\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
    
    menu obj;
    obj.food();
    odr ob;
    ob.order();
    return 0;
};