#pragma once
#include <list>
#include <thread>
#include "Job_System.h"

class Workers
{
public:
	Workers();
	~Workers();

	void start();

	std::thread workerThread;						///A single worker
};