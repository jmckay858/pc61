//============================================================================
// Name        : PC61.cpp
// Author      : Jeremy McKay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
double calculateRetail(double price, double markup);

int main() {
	double itemCost,
		   itemMarkup;
	do
	{
		cout << "\n   "
			 << "Enter price of item or -99 to quit: ";
		cin  >> itemCost;
		if (itemCost <= 0 || itemCost == -99){
			if (itemCost == -99)
			{
				continue;
			}
			cout << "\n   "
				 << "Please enter a positive value or -99 to quit.\n";
			continue;
		} else
		{
			cout << "   "
				 << "Enter markup percentage: ";
			cin  >> itemMarkup;
			if (itemMarkup < 0)
			{
				cout << "\n   "
					 << "Please enter a positive value.\n";
					 continue;
			}
		}

		cout << "\n   "
			 << "The retail price of the item is: "
			 << calculateRetail(itemCost,itemMarkup)
		     << endl;
	} while (itemCost != -99);
	return 0;
}


double calculateRetail(double price, double markup)
{
	double retailPrice;

	retailPrice = price + (price * (markup/100));

	return retailPrice;
}
