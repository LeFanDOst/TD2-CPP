#ifndef DEF_ITV
#define DEF_ITV

#include <ostream>

typedef long double ldouble;

class Itv
{
	public:
		Itv(ldouble bi = 0.00, ldouble bs = 1.00);
		Itv(Itv const& src);
		~Itv();
		
		inline ldouble getBorneInferieure() const { return m_bi; }
		inline ldouble getBorneSuperieure() const { return m_bs; }
		inline ldouble getLongueur() const { return (m_bs - m_bi); }
		
		inline void setBorneInferieure(ldouble bi) { m_bi = ((bi > m_bs) ? m_bi : bi); }
		inline void setBorneSuperieure(ldouble bs) { m_bs = ((bs < m_bi) ? m_bs : bs); }
		
		inline bool appartientA(ldouble reel) const { return ((reel >= m_bi) && (reel <= m_bs)); }
		inline bool estInclusStrictement(Itv const& i2) const { return (((m_bi > i2.m_bi) && (m_bs <= i2.m_bs)) || ((m_bs == i2.m_bi) && (m_bs < i2.m_bs))); }
		inline bool accoleA(Itv const& i2) const { return ((m_bs == i2.m_bi) || (m_bi == i2.m_bs)); }
		//inline bool imbriqueAvec(Itv const& i2) const { return ((m_bi > i2.m_bi) && (m_bs < i2.m_bs)); }
		inline bool imbriqueAvec(Itv const& i2) const { return (!(this->estEgal(i2)) && !(this->estInclusStrictement(i2)) && !(this->estDisjoint(i2)) && !(this->accoleA(i2))); }
		void translation(ldouble x);
		
		friend std::ostream& operator<<(std::ostream& os, Itv const& src);
		friend bool operator==(Itv const& i1, Itv const& i2);
		friend bool operator!=(Itv const& i1, Itv const& i2);
	
	private:
		ldouble m_bi;
		ldouble m_bs;
	
	protected:
		virtual void ecrire(std::ostream& os) const;
		virtual bool estEgal(Itv const& i2) const;
		virtual bool estDisjoint(Itv const& i2) const;
};

#endif // DEF_ITV
