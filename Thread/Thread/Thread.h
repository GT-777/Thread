#pragma once
#pragma once
#include <iostream>
#include <thread>


void PrintMessage(const std::string& message, int count)
{
	for (int i = 0; i < count; ++i)
	{
		std::cout << "From thread: " << message << " [" << i << "]\n";
	}
}

int main()
{

	std::thread myThread(PrintMessage, "Hello from another thread", 5);


	for (int i = 0; i < 5; ++i)
	{
		std::cout << "From main: Main thread working [" << i << "]\n";
	}



	myThread.join();
	std::cout << "Main thread finished.\n";
	return 0;
}


