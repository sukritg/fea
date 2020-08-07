#pragma once
namespace sg
{
	class section
	{
	public:
		section();
		section(const int _id, const double _area);
		section(const int _id, const double _area, const double _izz);
		section(const int _id, const double _area, const double _ixx, const double _iyy, const double _izz);
		section(const section& s);
		~section();

		inline double a() const { return m_a; }
		inline double a() { return m_a; }
		inline double ixx() const { return m_ixx; }
		inline double ixx() { return m_ixx; }
		inline double iyy() const { return m_iyy; }
		inline double iyy() { return m_iyy; }
		inline double izz() const { return m_izz; }
		inline double izz() { return m_izz; }
		inline int  id() const { return sectID; }
		inline int  id() { return sectID; }

		void setArea(const double _area);
		void setIxx(const double _ixx);
		void setIyy(const double _iyy);
		void setIzz(const double _izz);
		void setID(const int _id);

	private:
		bool checkID(int _id);
		bool check(double _value);
		int sectID;
		double m_a, m_ixx, m_iyy, m_izz;
	};
}