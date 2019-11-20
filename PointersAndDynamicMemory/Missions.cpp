#include "Missions.h"
#include <cstring>
#include <iostream>


Missions::Missions()
{
}
Missions::Missions(int x, int y)
{
	
}
Missions::Missions(int agentAge, int agentKillCount, int bounty, int difficulty) {
	int proficiency = agentKillCount / agentAge;
	
}

Missions::~Missions()
{
}
