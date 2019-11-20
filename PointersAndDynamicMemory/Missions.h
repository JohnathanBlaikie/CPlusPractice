#pragma once
class Missions
{
public:
	int bounty = 0;

	Missions();
	Missions(int bounty, int difficulty);
	Missions(int agentLevel, int agentKillCount, int bounty, int difficulty);
	~Missions();
};

