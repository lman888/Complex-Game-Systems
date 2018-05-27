#include <iostream>
#include "Job_System.h"		///Includes the Job Class
#include "Workers.h"		///Includes the Workers
#include <string>
#include <thread>


void work()
{
	std::cout << "Thread is working" << std::endl;
}


void main()
{

	Job_System jobs;

	jobs.AddJob((int*)work);
	jobs.ExecuteJob();

	system("pause");
}