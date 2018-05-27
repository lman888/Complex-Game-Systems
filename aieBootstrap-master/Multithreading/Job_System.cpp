#include "Job_System.h"



Job_System::Job_System()
{

}


Job_System::~Job_System()
{

}

void Job_System::AddJob(int(*Fpt))
{
	jobMutex.lock();

	jobs.push_back((int)Fpt);					///Adds the function to the list of jobs

	jobMutex.unlock();
}

void Job_System::ExecuteJob()
{

	for (int i = 0; i < jobs.size; i++)
	{
		std::cout << i << std::endl;
	}

}
