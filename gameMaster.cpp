#include "pch.h"
//Tiger McDaniel

#include <cstdlib>
#include <iostream>  
#include "f_graph.h" 
//basic graphic and some additional functions

#define s2 "                    " //20 pix    

using namespace std;
 
int menu(void)   
{ 
     gf.makeSkeleton();
     gf.headerLine("Cyber Pirates");
     gf.setTitle(s2"Sample Project For \"f_graph.h\" Header File - by FIRAT KARAKUSOGLU"); 
     gf.showLeftSide("   MENU   ",1);
     gf.showLeftSide("");
     gf.showLeftSide("1 Play New Game"); 
     gf.showLeftSide("2 See High Scores");
     gf.showLeftSide("3 Play Practice Trivia");
     gf.showLeftSide("4 Reset High Scores");
	 gf.showLeftSide("5 View Practice Trivia");
     gf.showLeftSide("6 Exit");
     gf.footerLine("Enter your choice [1-5]: ");
     int intUserChoice = 0;
     cin>>intUserChoice;
     while(intUserChoice<1 || intUserChoice>5)
     { 
		 intUserChoice = 0;
		 gf.warning("Error: Your choice should be [1-5]!");
		 gf.footerLine("Enter your choice [1-5]: ");
		 cin>>intUserChoice;
     };
     return intUserChoice;
};
      
//Play the game
void menu1(void)
{ 
     double x=0;
     double y=0;
     double sum=0;
     
     gf.showRightSide("        SUMMATION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter augend : "); cin>>x;
     gf.showRightSide("Augend is: "); cout<<x; 
     
     gf.footerLine("Enter addend : "); cin>>y;
     gf.showRightSide("Addend is: "); cout<<y;
     
     sum = x+y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Sum is: "); cout<<sum;
     gf.showRightSide("-----------------------------------------");
};     
   
//View High Scores
void menu2(void)
{
     double x=0;
     double y=0;
     double subtraction=0;

     gf.showRightSide("        SUBSTRACTION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter minuend : "); cin>>x;
     gf.showRightSide("Minuend is: "); cout<<x; 
     
     gf.footerLine("Enter subtrahend : "); cin>>y;
     gf.showRightSide("Subtrahend is: "); cout<<y;
     
     subtraction = x-y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Subtraction is: "); cout<<subtraction;
     gf.showRightSide("-----------------------------------------");
};

//Play Practice Trivia
void menu3(void)
{
     double x=0;
     double y=0;
     double sum=0;
     
     gf.showRightSide("        MULTIPLICATION",1);
     gf.showRightSide("-----------------------------------------");   
     
     gf.footerLine("Enter multiplicand : "); cin>>x;
     gf.showRightSide("Multiplicand is: "); cout<<x; 
     
     gf.footerLine("Enter multiplier : "); cin>>y;
     gf.showRightSide("Multiplier is: "); cout<<y;
     
     sum = x*y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Multiplication is: "); cout<<sum;
     gf.showRightSide("-----------------------------------------");
};  

//Reset High Scores
void menu4(void)
{
     double x=0;
     double y=0;
     double division=0;

     gf.showRightSide("        DIVISION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter dividend : "); cin>>x;
     gf.showRightSide("Dividend is: "); cout<<x; 
     
     gf.footerLine("Enter divider : "); cin>>y;
     gf.showRightSide("Divider is : "); cout<<y;   
      
     division = x/y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Division is: "); cout<<division;
     gf.showRightSide("-----------------------------------------"); 
};
 
//View Practice Trivia (Q and A)
void menu5(void)
{
        
};

//Quit
void menu6(void)
{
	gf.showRightSide("GOOD BYE...", 1);
	gf.wait(1000);
	exit(1);
}

/*
* Prints out the current map 
*/
void printMap(void)
{
	int x1 = 0;
	int x2 = 12;
	int y1 = 0;
	int y2 = 11.6;

	//the console is 120 by 58 so print a 10X5 map in that box 
	for (int row = 0; row < 5; row++) {
		for (int col = 0; col < 10; col++) {
			gf.box(x1, y1, x2, y2);
			x1 += 12;
			x2 += 12;
		}
		x1 = 0;
		y1 += 11.6;
		y2 += 11.6;
	}
}

int main(int argc, char *argv[])
{
	printMap();
	cout << gf.getDimensionX() << " by " << gf.getDimensionY() << endl;
	/*
	while (1 == 1)
	{
		switch(menu())
		{
			case 1:
				//Play the game
				menu1(); 
				break;
			case 2: 
				//View High Scores
				menu2(); 
				break;
			case 3: 
				//Play Practice Trivia
				menu3(); 
				break;
			case 4: 
				//Reset High Scores
				menu4(); 
				break;
			case 5: 
				//View Practice Trivia (Q and A)
				menu5(); 
				break;
			case 6:
				//Quit
				menu6();
				break;
		};
		
		system("PAUSE");
		return EXIT_SUCCESS;
	};
	*/
};
