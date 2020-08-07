#include "../include/element.h"

sg::element::element()
	: elemID(1)
{}

sg::element::element(const int _id,
	const std::vector<std::shared_ptr<node>> _nodes,
	const sg::matrix _ke)
{
	setID(_id);
	m_ke = _ke;
	m_nodes = _nodes;
}

sg::element::element(const element& e)
{
	elemID = e.elemID;
	m_nodes = e.m_nodes;
	m_ke = e.m_ke;
}

sg::element::~element()
{}

void sg::element::setID(const int _id)
{
	if (checkID(_id))
		elemID = _id;
	else
		throw "The element ID shall be positive.";
}

bool sg::element::checkID(int _id) { return _id > 0; }

