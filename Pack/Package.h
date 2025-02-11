#pragma once
#include "Adress.h"

class Package
{
public:
	Package(Adress sender,
		Adress recipient,
		double weight,
		double costPerOunce);

	virtual double CalculateCost();
	void SetWeight(double weight);
	void SetCostPerOunce(double costPerOunce);
	double GetCostPerOunce();
	double GetWeight();

private:
	Adress m_senderData;
	Adress m_recipientData;
	double m_weight;
	double m_costPerOunce;
};

