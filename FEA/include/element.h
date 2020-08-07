#pragma once
#include <memory>
#include <vector>

#include "node.h"
#include "matrix.h"

namespace sg
{
	class element
	{
	public:
		element();
		element(const int _id, 
			const std::vector<std::shared_ptr<node>> _nodes,
			const sg::matrix _ke);
		element(const element& e);
		~element();

		inline sg::matrix ke() const { return m_ke; }
		inline sg::matrix ke() { return m_ke; }
		inline int id() const { return elemID; }
		inline int id() { return elemID; }

		inline void setKe(const sg::matrix _ke) { m_ke = _ke; }
		inline void setNodes(const std::vector<std::shared_ptr<node>> _nodes) { m_nodes = _nodes; }
		inline void setID(const int _id);

	protected:
		bool checkID(int _id);
		int elemID;
		std::vector<std::shared_ptr<node>> m_nodes;
		sg::matrix m_ke;
	};
}