#pragma once
#include <memory>

#include "node.h"

namespace sg
{
	class boundary
	{
	public:
		boundary();
		boundary(const std::shared_ptr<node> _node,
			const bool _DOFdx, const bool _DOFdy, const bool _DOFdz,
			const bool _DOFrx, const bool _DOFry, const bool _DOFrz);
		boundary(const boundary& b);
		~boundary();
		

	private:
		std::shared_ptr<node> m_node;
		// DOF false = free & true = fixed
		bool m_DOFdx, m_DOFdy, m_DOFdz,
			m_DOFrx, m_DOFry, m_DOFrz;
	};
}