#include <iostream>
#include "Job_System.h"		///Includes the Job Class
#include "Workers.h"		///Includes the Workers
#include <string>
#include <thread>
#include <chrono>
#include <threadpoolapiset.h>



void work()
{
	std::cout << "Thread is working" << std::endl;
}

void main()
{
	Job_System job;
	int userNumber;
	
	//job.JobOne();
	//job.JobTwo();
	Workers worker;

	system("pause");
}