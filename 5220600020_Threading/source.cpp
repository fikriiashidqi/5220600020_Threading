#include <iostream>
#include <thread>

using namespace std;

void odd()	// function to print odd number
{
	for (int i = 1; i <= 20; i++)	// print number between 1 to 20
	{
		if (i % 2 != 0)				// odd number condition
		{
			cout << i << endl;		// print odd number
			this_thread::sleep_for(chrono::seconds(1));				// delay for 1 second
		}
	}
	cout << "finished counting odd number" << endl;
}

void even()	// function to print even number
{
	for (int i = 1; i <= 20; i++)	// print number between 1 to 20
	{
		if (i % 2 == 0)				// even number condition
		{
			cout << i << endl;		// print even number
			this_thread::sleep_for(chrono::milliseconds(2500));		// delay for 2.5 second or 2500 miliseconds
		}
	}
	cout << "finished counting even number" << endl;
}

int main()
{
	thread th1(odd);		// construct new thread for odd number function
	thread th2(even);		// construct new thread for even number function

	th1.join();				// wait for thread th1 to finish
	th2.join();				// wait for thread th2 to finish
	

	return 0;
}
