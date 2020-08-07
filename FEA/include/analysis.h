#pragma once
#include "beam2D.h"

namespace sg
{
	class analysis
	{
	public:
		analysis(std::vector<std::shared_ptr<beam2D>> _elements);
		~analysis();

	private:
		sg::matrix m_IDArray;
		sg::matrix m_K;
		sg::matrix m_F;
		sg::matrix m_d;
	};
}