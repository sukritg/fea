#pragma once
#include <cmath>

namespace sg
{
	class node
	{
	public:
		node();
		node(const int _id, const double _cx);
		node(const int _id, const double _cx, const double _cy);
		node(const int _id, const double _cx, const double _cy, const double _cz);

		node(const node& n);
		~node();

		inline void setX(const double _cx) { m_x = _cx; }
		inline void setY(const double _cy) { m_y = _cy; }
		inline void setZ(const double _cz) { m_z = _cz; }
	
		inline double x() const { return m_x; }
		inline double x() { return m_x; }
		inline double y() const{ return m_y; }
		inline double y() { return m_z; }
		inline double z() const { return m_z; }
		inline double z() { return m_z; }
		inline int  id() const { return nodeID; }
		inline int  id()  { return nodeID; }

		void setID(const int _id);
	private:
		bool checkID(int _id);
		int nodeID;
		double m_x, m_y, m_z;
	};

	double distance(node n1, node n2)
	{
		return std::sqrt(
			std::pow(n1.x() - n2.x(), 2) + 
			std::pow(n1.y() - n2.y(), 2) + 
			std::pow(n1.z() - n2.z(), 2)
		);
	}
}