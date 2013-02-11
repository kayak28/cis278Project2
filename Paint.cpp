#include <iostream>

using namespace std;
//state method names that will be used and definded.
void getRoomSize(int& squareFt)
int paintRequired (int squareFt)
double computeLabor(int squareFt)
double jobCost(int gallons, double hours)

int main()
{	
	int manyRooms = 0;
	int roomSize = 0;
	int hours = 0;
	int paint = 0;
	double totalCost = 0.0;
	
	cout << "Enther the number of rooms to be painted";
	cin >> manyRooms;
	cout << "\n";
	//valify if  the numbers of room is positive
	if(room < 0)
	{
		cout << "the number of rooms cannot be a negative value";
	}	
	else 
	{
		cout << manyRoom << "is accepted";
	}
	cout << "Enter size of the room in square feet";
	cin >> roomSize << "\n";

	cout << "Total room size is " << roomSize << "ft^2 \n";
	

	//calculate the amout of paint requirement.
	paint = paintRequired(roomSize);
	cout << "\n Rrequirement for paint: " << paint << "Gallon/paint\n";

	//evaluate repuired hours to paint
	hours = (int) computeLabor(roomSize);
	cout << "total repuired hours of labor is" << hours << "h";
  
	//estimete both total cost
	totalCost = jobCost(paint, hours);
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "total cost $" << totalCost <<"\n";
	
	cout << "Thank you for using this program";
	cout << "\nprogramed by Kaya Ota";

	return 0;
}//main

void getRoomSize(int& squareFt)
{
	cout << "How mush do you need to paint your wall in square feet?";
	cin 

}//getRoomSize
int paintRequired (int squareFt)
{
	if(squareFt <= 115)
	{
		return 1;//only need initial value and no more
	}
	else
	{
		1 + paintRequired(squareFt - 115); 	
	}
}//paintRequired
double computeLabor(int squareFt)
{
	 //hour
	 double hours =0.0;
	 hours =  squareFt / 115 * 8.00;
	 return hours;
}//compute labor
double jobCost(int gallons, double hours)
{
	//initial values 
	const double laborPhours = 18.0; // labor / hours 
	const double pricePgal = 15.0;// paint price / gallon 
	
	double laborCost = hours * laborPhours;
	double paintCost = gallons * priceOgal; 
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "\nCost of Labor $" << laborCost << "\n";
	cout << "\nCost of paint $" << paintCost << "\n";
	
	double totalCost = laborCost + paintCost;
	return totalCost;
}//jobCost 

