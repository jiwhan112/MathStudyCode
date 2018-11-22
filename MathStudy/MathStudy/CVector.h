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
	float Length(); //����
	CVector Normalize(); //��������
	
	// ������
	CVector Scale(float k);

	void operator=(const CVector& rhs); // rhs ������ ��� �ɹ� ������ ���� ���ͷ� ����
	CVector operator+(const CVector& rhs); // ����
	CVector operator-(const CVector& rhs); // ����

};

#endif

