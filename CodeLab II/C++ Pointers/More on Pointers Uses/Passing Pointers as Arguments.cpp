/*
#include <iostream>
using namespace std;
//passing a value to a function, passing a pointer make changes in the function and in the main program
									   //int count
double averageCost(double* priceArray, int* count)
{
	double sum = 0;     //count
	for (int i = 0; i < *count; i++)
	{
		sum += *(priceArray + i);
	}			   //count
	//return sum / *count;
	double avg = sum / *count;
	*count += 5;
	cout << "In function count value" << *count << endl;
	return avg;

}
int main()
{
	double prices[5]{ 5.00, 4.50, 3.75, 3.10, 6.75 };
	int quantity = 5;						// 5
	double average = averageCost(prices, &quantity);
	cout << "$" << average << endl;
	cout << "quantity value: " << quantity;

	return 0;
}
*/