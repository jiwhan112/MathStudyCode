#ifndef CVECTOR_HEADER
#define CVECTOR_HEADER

#include <math.h>
class CVector
{
public:	
	CVector();
	CVector(float _x, float _y, float _z);
	~CVector();
	CVector(const CVector& rhs);

	float x, y, z;
	float Length(); //길이
	CVector Normalize(); //단위백터
	
	void operator=(const CVector& rhs); // rhs 백터의 모든 맴버 변수를 현재 백터로 복사

};

#endif

