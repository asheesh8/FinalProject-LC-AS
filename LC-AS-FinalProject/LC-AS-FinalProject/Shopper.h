#pragma once
#include <iostream>
#include <vector>
#include "SystemManager.h" //inheriting from.
using namespace std;

class Shopper : public SystemManager
{
public:
	Shopper(string username, string password);
	~Shopper();
private:
	//what shopper members do we need?
};
