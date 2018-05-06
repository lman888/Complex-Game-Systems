#include <iostream>
#include "Job_System.h"


void main()
{
	Job_System job;
	int userNumber;
	std::string userSentence;

	std::cout << "Please enter a number above 10" << std::endl;
	std::cin >> userNumber;

	job.JobOne(userNumber);

	std::cout << "New Task" << std::endl;
	std::cin >> userSentence;
	job.JobTwo(userSentence);
	system("pause");
}