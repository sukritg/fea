#pragma once
#include "../include/nodeResponse.h"

sg::nodeResponse::nodeResponse()
	: m_dx(0), m_dy(0), m_dz(0), m_rx(0), m_ry(0), m_rz(0)
{
	m_node = nullptr;
}

sg::nodeResponse::nodeResponse(const std::shared_ptr<node> _node,
	const std::array<double, 6> _values)
	: m_dx(_values[0]), m_dy(_values[1]), m_dz(_values[2]), 
	m_rx(_values[3]), m_ry(_values[4]), m_rz(_values[5])
{
	m_node = _node;
}

sg::nodeResponse::nodeResponse(const nodeResponse& nR)
{
	m_node = nR.m_node;
	m_dx = nR.m_dx;
	m_dy = nR.m_dy;
	m_dz = nR.m_dz;
	m_rx = nR.m_rx;
	m_ry = nR.m_ry;
	m_rz = nR.m_rz;
}

sg::nodeResponse::~nodeResponse()
{} 
  asdasedad
