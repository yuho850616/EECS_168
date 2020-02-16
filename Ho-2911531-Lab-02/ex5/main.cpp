/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Tsung Yu Ho
 * Assignment:   EECS-168 Lab 2
 * Description:  This program  let the user place a food order.
 * Date: 09/13/2017
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
int main()
{
	char choice='a';
	char subchoice='b';
 	double num=0.0;

  	std::cout<<"Welcome to the taco stand!\n \n";
  	std::cout<<"Place order:\n";
  	std::cout<<"============\n";
  	std::cout<<"(c/C) Chicken Taco $3.50\n";
  	std::cout<<"(s/S) Salad $5.0\n";
  	std::cout<<"(w/W) Water $1.0\n";
  	std::cout<<"Choice: ";
  	std::cin>>choice;
  	std::cout<<"\n \n";

  	if(choice =='s'||choice =='S')
  	{
    		std::cout<<"Quantity: \n";
    		std::cout<<"============\n";
    		std::cout<<"How many?: ";
    		std::cin>>num;
    		std::cout<<"\n";
    		std::cout<<"Receipt:\n";
    		std::cout<<"============\n";
    		std::cout<<"Sub Total\n";
    		std::cout<<"\t"<<num<<" Salad @ $5.0: $"<<(5.0*num)<<"\n";
    		std::cout<<"Tax\n";
    		std::cout<<"\t"<<"8% of $"<<(5.0*num)<<": $"<<(5.0*num*0.08)<<"\n";
    		std::cout<<"Total\n";
    		std::cout<<"\t"<<"$"<<(5.0*num*1.08)<<"\n";
    		std::cout<<"Thank you!\n";
  	}
  	else if (choice =='c'||choice =='C')
  	{
 		std::cout<<"Toppings:\n";
		std::cout<<"============\n";
		std::cout<<"(t/T) Tomatoes $0.75\n";
		std::cout<<"(c/C) Cheese $1.5\n";
		std::cout<<"(h/H) Hot Sauce $0.3\n";
		std::cout<<"(n/N) None $0.0\n";
		std::cout<<"Choice: ";
		std::cin>>subchoice;
		std::cout<<"\n \n";
		std::cout<<"Quantity:\n";
		std::cout<<"============\n";
		std::cout<<"How many?: ";
		std::cin>>num;
		std::cout<<"\n \n";
		std::cout<<"Receipt:\n";
		std::cout<<"============\n";
		std::cout<<"Sub Total\n";
  	}
  	if(subchoice =='t'||subchoice =='T')
  	{
  		std::cout<<"\t"<<num<<" Chicken Taco @ $3.5: "<<"$"<<(num*3.5)<<"\n";
		std::cout<<"\t"<<num<<" Tomatoes @ $0.75: "<<"$"<<(num*0.75)<<"\n";
		std::cout<<"Tax\n";
		std::cout<<"\t"<<"8% of $"<<(4.25*num)<<": $"<<(4.25*num*0.08)<<"\n";
		std::cout<<"Total\n";
		std::cout<<"\t"<<"$"<<(4.25*num*1.08)<<"\n";
		std::cout<<"Thank you!\n";
  	}

  	else if(subchoice =='c'||subchoice =='C')
  	{
  		std::cout<<"\t"<<num<<" Chicken Taco @ $3.5: "<<"$"<<(num*3.5)<<"\n";
  		std::cout<<"\t"<<num<<" Cheese @ 1.5: "<<"$"<<(num*1.5)<<"\n";
  		std::cout<<"Tax\n";
  		std::cout<<"\t"<<"8% of $"<<(5.0*num)<<": $"<<(5.0*num*0.08)<<"\n";
  		std::cout<<"Total\n";
  		std::cout<<"\t"<<"$"<<(5.0*num*1.08)<<"\n";
  		std::cout<<"Thank you!\n";
  	}
  	else if(subchoice =='h'||subchoice =='H')
  	{
  		std::cout<<"\t"<<num<<" Chicken Taco @ $3.5: "<<"$"<<(num*3.5)<<"\n";
  		std::cout<<"\t"<<num<<" Hot Sauce @ $0.3: "<<"$"<<(num*0.3)<<"\n";
  		std::cout<<"Tax\n";
  		std::cout<<"\t"<<"8% of $"<<(3.8*num)<<": $"<<(3.8*num*0.08)<<"\n";
  		std::cout<<"Total\n";
  		std::cout<<"\t"<<"$"<<(3.8*num*1.08)<<"\n";
  		std::cout<<"Thank you!\n";
  	}
  	else if(subchoice =='n'||subchoice =='N')
  	{
  		std::cout<<"\t"<<num<<" Chicken Taco @ $3.5: "<<"$"<<(num*3.5)<<"\n";
  		std::cout<<"Tax\n";
  		std::cout<<"\t"<<"8% of $"<<(3.5*num)<<": $"<<(3.5*num*0.08)<<"\n";
  		std::cout<<"Total\n";
  		std::cout<<"\t"<<"$"<<(3.5*num*1.08)<<"\n";
  		std::cout<<"Thank you!\n";
 	}
  	else if(choice =='w'||choice =='W')
  	{
  	std::cout<<"Quantity: \n";
  	std::cout<<"============\n";
  	std::cout<<"How many?: ";
  	std::cin>>num;
  	std::cout<<"\n \n";
  	std::cout<<"Receipt:\n";
  	std::cout<<"============\n";
  	std::cout<<"Sub Total\n";
  	std::cout<<"\t"<<num<<" Water @ $1.0: $"<<(1.0*num)<<"\n";
  	std::cout<<"Tax\n";
  	std::cout<<"\t"<<"8% of $"<<(1.0*num)<<": $"<<(1.0*num*0.08)<<"\n";
  	std::cout<<"Total\n";
  	std::cout<<"\t"<<"$"<<(1.0*num*1.08)<<"\n";
  	std::cout<<"Thank you!\n";
  	}

return(0);
}

