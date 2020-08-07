#include "../include/section.h"

sg::section::section()
	: sectID(1), m_a(0), m_ixx(0), m_iyy(0), m_izz(0)
{}

sg::section::section(const int _id, const double _area)
	: m_ixx(0), m_iyy(0), m_izz(0)
{
	setID(_id);
	setArea(_area);
}

sg::section::section(const int _id, const double _area, const double _izz)
	: m_ixx(0), m_iyy(0)
{
	setID(_id);
	setArea(_area);
	setIzz(_izz);
}

sg::section::section(const int _id, const double _area, const double _ixx, const double _iyy, const double _izz)
{
	setID(_id);
	setArea(_area);
	setIxx(_ixx);
	setIyy(_iyy);
	setIzz(_izz);
}

sg::section::section(const section& s)
{
	sectID = s.sectID;
	m_a = s.m_a;
	m_ixx = s.m_ixx;
	m_iyy = s.m_iyy;
	m_izz = s.m_izz;
}

sg::section::~section()
{}

void sg::section::setArea(const double _area)
{
	if (check(_area))
		m_a = _area;
	else
		throw "Area shall be positive.";
}

void sg::section::setIxx(const double _ixx)
{
	if (check(_ixx))
		m_ixx = _ixx;
	else
		throw "Inertia about x-axis shall be positive.";
}

void sg::section::setIyy(const double _iyy)
{
	if (check(_iyy))
		m_iyy = _iyy;
	else
		throw "Inertia about y-axis shall be positive.";
}

void sg::section::setIzz(const double _izz)
{
	if (check(_izz))
		m_izz = _izz;
	else
		throw "Inertia about z-axis shall be positive.";
}

void sg::section::setID(const int _id)
{
	if (checkID(_id))
		sectID = _id;
	else
		throw "The section ID shall be positive.";
}

bool sg::section::checkID(int _id) { return _id > 0; }

bool sg::section::check(double _value) { return _value > 0; }