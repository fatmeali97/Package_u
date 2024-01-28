#include "Package.h"
#include <iostream>

Package::Package(Adress sender,
	Adress recipient,
	double weight,
	double costPerOunce)
	: m_senderData(sender)
	, m_recipientData(recipient)
{
	
	SetWeight(weight);
	SetCostPerOunce(costPerOunce);
}

double Package::CalculateCost()
{
	return m_weight * m_costPerOunce;
}

void Package::SetWeight(double weight)
{

	m_weight = weight;
}

void Package::SetCostPerOunce(double costPerOunce)
{

	m_costPerOunce = costPerOunce;
}

double Package::GetCostPerOunce()
{

	return m_costPerOunce;
}

double Package::GetWeight()
{
	return m_weight;
}