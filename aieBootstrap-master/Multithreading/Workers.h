#pragma once
#include <vector>
#include <thread>

class Workers
{
public:

	Workers();
	~Workers();
	

	std::vector<std::thread> workerThreads;	///An array of threads
};