#pragma once
#include "element.h"
#include "material.h"
#include "section.h"

namespace sg
{
	class beam2D : public element
	{
	public:
		beam2D();
		beam2D(const std::shared_ptr<node> _node1, const std::shared_ptr<node> _node2, 
			const std::shared_ptr<material> _mate, const std::shared_ptr<section> _sect);
		beam2D(const beam2D& b);
		~beam2D();
	
	private:
		void init();
		std::shared_ptr<material> m_mate;
		std::shared_ptr<section> m_sect;
	};
}
