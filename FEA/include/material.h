#pragma once
namespace sg
{
	class material
	{
	public:
		material();
		material(const int _id, const double _eMod);
		material(const material& m);
		~material();

		inline double e() const { return m_e; }
		inline double e() { return m_e; }
		inline int  id() const { return mateID; }
		inline int  id() { return mateID; }

		inline void setE(double _eMod) { m_e = _eMod; }
		void setID(int _id);

	private:
		bool checkID(int _id);
		bool check(double _value);
		int mateID;
		double m_e;
	};
}