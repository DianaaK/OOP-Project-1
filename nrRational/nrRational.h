#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class nrRational
{
public:
	nrRational(int, int);
	nrRational(const nrRational &);
	~nrRational();

	void setFractie(int numarator, int numitor);
	void setNumarator(int numarator);
	int getNumarator();
	void setNumitor(int numitor);
	int getNumitor();

	nrRational operator+=(int);
	nrRational operator+=(nrRational&);
	nrRational operator-=(int);
	nrRational operator-=(nrRational&);
	nrRational operator*=(int);
	nrRational operator*=(nrRational&);
	nrRational operator/=(int);
	nrRational operator/=(nrRational&);

	friend nrRational operator+(const nrRational&);
	friend nrRational operator-(const nrRational&);

	friend nrRational operator+(const nrRational&, const nrRational&);
	friend nrRational operator+(const nrRational&, int);
	friend nrRational operator+(int, const nrRational&);
	friend nrRational operator-(const nrRational&, const nrRational&);
	friend nrRational operator-(const nrRational&, int);
	friend nrRational operator-(int, const nrRational&);
	friend nrRational operator*(const nrRational&, const nrRational&);
	friend nrRational operator*(const nrRational&, int);
	friend nrRational operator*(int, const nrRational&);
	friend nrRational operator/(const nrRational&, const nrRational&);
	friend nrRational operator/(const nrRational&, int);
	friend nrRational operator/(int, const nrRational&);
	friend nrRational operator^(const nrRational&, int);

	std::string toString();

	friend bool operator==(const nrRational&, const nrRational&);
	friend bool operator==(int, const nrRational&);
	friend bool operator==(const nrRational&, int);
	friend bool operator!=(const nrRational&, const nrRational&);
	friend bool operator!=(int, const nrRational&);
	friend bool operator!=(const nrRational&, int);
	friend bool operator<(const nrRational&, const nrRational&);
	friend bool operator<(int, const nrRational&);
	friend bool operator<(const nrRational&, int);
	friend bool operator<=(const nrRational&, const nrRational&);
	friend bool operator<=(int, const nrRational&);
	friend bool operator<=(const nrRational&, int);
	friend bool operator>(const nrRational&, const nrRational&);
	friend bool operator>(int, const nrRational&);
	friend bool operator>(const nrRational&, int);
	friend bool operator>=(const nrRational&, const nrRational&);
	friend bool operator>=(int, const nrRational&);
	friend bool operator>=(const nrRational&, int);

	operator double();
	operator int();
	operator std::string();

	friend std::istream& operator>>(std::istream& in, nrRational &fractie);
	friend std::ostream& operator<<(std::ostream& out, nrRational &fractie);

private:
	int mNumarator, mNumitor;
	void formaCanonica();

};