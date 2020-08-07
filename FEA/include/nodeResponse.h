#pragma once
#include <memory>
#include <array>

#include "node.h"

namespace sg
{
	class nodeResponse
	{
	public:
		nodeResponse();
		nodeResponse(const std::shared_ptr<node> _node, const std::array<double, 6> _values);
		nodeResponse(const nodeResponse& nR);
		~nodeResponse();

	private:
		std::shared_ptr<node> m_node;
		double m_dx, m_dy, m_dz, m_rx, m_ry, m_rz;
	};
}