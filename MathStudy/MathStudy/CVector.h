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
	
	// 연산자
	CVector Scale(float k);

	void operator=(const CVector& rhs); // rhs 백터의 모든 맴버 변수를 현재 백터로 복사
	CVector operator+(const CVector& rhs); // 덧셈
	CVector operator-(const CVector& rhs); // 뺄셈

};

#endif

