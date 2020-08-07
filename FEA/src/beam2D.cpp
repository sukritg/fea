#include "../include/beam2D.h"

sg::beam2D::beam2D()
{}

sg::beam2D::beam2D(const std::shared_ptr<node> _node1, 
	const std::shared_ptr<node> _node2,
	const std::shared_ptr<material> _mate, 
	const std::shared_ptr<section> _sect)
	: m_mate(_mate), m_sect(_sect)
{
	setNodes({ std::make_shared<node>(_node1), std::make_shared<node>(_node2) });
	init();
}

sg::beam2D::beam2D(const beam2D& b)
{
	m_mate = b.m_mate;
	m_sect = b.m_sect;
}

sg::beam2D::~beam2D()
{}


void sg::beam2D::init()
{
	double E = m_mate->e();
	double I = m_sect->izz();  
	double L = distance(*m_nodes[0], *m_nodes[1]);

	double k11 = 12 * E * I / (L * L * L);
	double k12 = 6 * E * I / (L * L);
	double k13 = -k11;
	double k14 = k12;
	double k21 = k12;
	double k22 = 4 * E * I / L;
	double k23 = -k12;
	double k24 = 2 * E * I / L;
	double k31 = k13;
	double k32 = k23;
	double k33 = k11;
	double k34 = -k12;
	double k41 = k14;
	double k42 = k24;
	double k43 = k34;
	double k44 = k22;

	sg::matrix ke = {
		{ k11, k12, k13, k14},
		{ k21, k22, k23, k24},
		{ k31, k32, k33, k34},
		{ k41, k42, k43, k44}
	};
	setKe(ke);
}