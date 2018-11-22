#include <iostream>
using namespace std;
#include "CVector.h"


void VectorTest()
{
	CVector vec1(1.0f, 2.0f, 3.0f);
	CVector vec_result;
	float scalar_result = 0;
	printf("----백터-----\n");
	printf("Vector1: (%.2f,%.2f,%.2f)\n", vec1.x, vec1.y, vec1.z);	
	scalar_result = vec1.Length();
	printf("scalar_result: (%.2f)\n", scalar_result);
	vec_result = vec1.Normalize();
	printf("Vector1 Nomal: (%.2f,%.2f,%.2f)\n", vec_result.x, vec_result.y, vec_result.z);

	printf("----연산부분-----\n");
	CVector vec2(3, 4, 5);
	float k = 3;
	vec_result = vec1 + vec2;
	printf("Vector1+Vector2= (%.2f,%.2f,%.2f) \n", vec_result.x, vec_result.y, vec_result.z);
	vec_result = vec1 - vec2;
	printf("Vector1-Vector2= (%.2f,%.2f,%.2f) \n", vec_result.x, vec_result.y, vec_result.z);
	vec_result = vec1.Scale(k);
	printf("Vector1 * 3 = (%.2f,%.2f,%.2f) \n", vec_result.x, vec_result.y, vec_result.z);
}

void main()
{
	VectorTest();
	

}
