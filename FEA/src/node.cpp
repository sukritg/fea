#include "../include/node.h"

sg::node::node() : nodeID(1), m_x(0), m_y(0), m_z(0) {}

sg::node::node(const int _id, const double _cx) 
{ 
	setID(_id);
	m_x = _cx; 
	m_y = m_z = 0; 
}

sg::node::node(const int _id, const double _cx, const double _cy) 
{ 
	setID(_id);
	m_x = _cx; 
	m_y = _cy; 
	m_z = 0; 
}

sg::node::node(const int _id, const double _cx, const double _cy, const double _cz) 
{ 
	setID(_id);
	m_x = _cx; 
	m_y = _cy; 
	m_z = _cz; 
}

sg::node::node(const node& n)
{
	nodeID = n.nodeID; 
	m_x = n.m_x; 
	m_y = n.m_y; 
	m_z = n.m_z;
}

sg::node::~node()
{}

void sg::node::setID(const int _id)
{
	if (checkID(_id))
		nodeID = _id;
	else
		throw "The node ID shall be positive.";
}

bool sg::node::checkID(int _id) { return _id > 0; }