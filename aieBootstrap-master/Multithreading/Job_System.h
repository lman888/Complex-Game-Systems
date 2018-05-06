#pragma once
#include <iostream>
#include "Workers.h"



class Job_System
{
public:
	Job_System();
	~Job_System();

	void JobOne();

private:
	
	Workers workers;						///Calls the Worker Class
	
};

