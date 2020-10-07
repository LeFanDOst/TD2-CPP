#include "../include/Itv.hpp"

/*Itv::Itv(ldouble bi, ldouble bs)
{
	m_bi = ((bi < bs) ? bi : bs);
	m_bs = ((bs > bi) ? bs : bi);
}*/

Itv::Itv(ldouble bi, ldouble bs) : m_bi(((bi < bs) ? bi : bs)), m_bs(((bs > bi) ? bs : bi)) {}

Itv::Itv(Itv const& src) : Itv(src.m_bi, src.m_bs) {}

Itv::~Itv() {}


void Itv::translation(ldouble x)
{
	m_bi += x;
	m_bs += x;
}


std::ostream& operator<<(std::ostream& os, Itv const& src)
{
	src.ecrire(os);
	
	return os;
}

bool operator==(Itv const& i1, Itv const& i2)
{
	return i1.estEgal(i2);
}

bool operator!=(Itv const& i1, Itv const& i2)
{
	return i1.estDisjoint(i2);
}


void Itv::ecrire(std::ostream& os) const
{
	os << "[" << m_bi << " ; " << m_bs << "]";
}

bool Itv::estEgal(Itv const& i2) const
{
	return ((m_bi == i2.m_bi) && (m_bs == i2.m_bs));
}

bool Itv::estDisjoint(Itv const& i2) const
{
	//return ((!this->estEgal(i2)) && (!this->inclutDans(i2)) && (!this->accoleA(i2)) && (!this->imbriqueAvec(i2)));
	
	return ((m_bi > i2.m_bs) || (m_bs < i2.m_bi));
	
}
