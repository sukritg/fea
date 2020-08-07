#include "../include/material.h"

sg::material::material()
	: mateID(1), m_e(0)
{}

sg::material::material(const int _id, const double _eMod)
{
	setID(_id);
	if (check(_eMod))
		m_e = _eMod;
	else
		throw "Elastic Modulus shall be positive.";
}

sg::material::material(const material& m)
{
	mateID = m.mateID;
	m_e = m.m_e;
}

sg::material::~material()
{}

void sg::material::setID(const int _id)
{
	if (checkID(_id))
		mateID = _id;
	else
		throw "The material ID shall be positive.";
}

bool sg::material::checkID(int _id) { return _id > 0; }

bool sg::material::check(double _value) { return _value > 0; }
