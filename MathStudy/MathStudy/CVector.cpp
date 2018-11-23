#include "CVector.h"



CVector::CVector()
{
	x= y= z = 0;
}

CVector::CVector(float _x, float _y, float _z)
{
	x = _x;
	y = _y;
	z = _z;
}


CVector::~CVector()
{
}

CVector::CVector(const CVector & rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
}

float CVector::Length()
{
	return sqrtf(x * x + y * y + z * z);
}

CVector CVector::Normalize()
{
	const float length = Length();
	float _length = 1 / (length);
	float _x, _y, _z;
	_x = x * _length;
	_y = y * _length;
	_z = z * _length;
	return CVector(_x, _y, _z);
}

CVector CVector::Scale(float k)
{
	return CVector(k*x, k*y, k*z);

}

void CVector::operator=(const CVector & rhs)
{
	x = rhs.x;
	y = rhs.y;
	z = rhs.z;
}

CVector CVector::operator+(const CVector & rhs)
{
	return CVector(x + rhs.x, y + rhs.y, z + rhs.z);
}

CVector CVector::operator-(const CVector & rhs)
{
	return CVector(x - rhs.x, y - rhs.y, z - rhs.z);
}

float CVector::Dot(const CVector & rhs)
{
	return x * rhs.x + y * rhs.y + z * rhs.z;
}

