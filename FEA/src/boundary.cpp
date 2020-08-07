#pragma once
#include "../include/boundary.h"

sg::boundary::boundary()
{
	m_node = nullptr;
	m_DOFdx = m_DOFdy = m_DOFdz =
		m_DOFrx = m_DOFry = m_DOFrz = false;
}

sg::boundary::boundary(const std::shared_ptr<node> _node,
	const bool _DOFdx, const bool _DOFdy, const bool _DOFdz,
	const bool _DOFrx, const bool _DOFry, const bool _DOFrz)
{
	m_node = _node;
	m_DOFdx = _DOFdx;
	m_DOFdy = _DOFdy;
	m_DOFdz = _DOFdz;
	m_DOFrx = _DOFrx;
	m_DOFry = _DOFry;
	m_DOFrz = _DOFrz;
}

sg::boundary::boundary(const boundary& b)
{
	m_node = b.m_node;
	m_DOFdx = b.m_DOFdx;
	m_DOFdy = b.m_DOFdy;
	m_DOFdz = b.m_DOFdz;
	m_DOFrx = b.m_DOFrx;
	m_DOFry = b.m_DOFry;
	m_DOFrz = b.m_DOFrz;
}

sg::boundary::~boundary()
{}
