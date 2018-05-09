#include "Workers.h"



Workers::Workers()
{
	
}


void Workers::Run()
{
	while (running)
	{
		if (ready)
		{
			ready = false;
			
		}
	}
}

void Workers::getCondition(std::condition_variable *& cv)
{

}

Workers::~Workers()
{

}



