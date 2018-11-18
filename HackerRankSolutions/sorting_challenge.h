#pragma once
#include <bits/stdc++.h>
struct Player {
	int score;
	std::string name;
};

class Checker {
public:
	// complete this method
	static int comparator(Player a, Player b);
};

int activityNotifications(std::vector<int> expenditure, int d);

