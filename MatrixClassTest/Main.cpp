#include <iostream>

class Vector3
{
public:
	Vector3(float x, float y, float z) :x(x), y(y), z(z) {};
	~Vector3(){};

	float x, y, z;

};

class Matrix3x3
{
public:
	Vector3 r1, r2, r3;
	Matrix3x3():r1(Vector3(1,0,0)), r2(Vector3(0,1,0)), r3(Vector3(0,0,1)){};
	Matrix3x3(Vector3 r1, Vector3 r2, Vector3 r3){};
	~Matrix3x3(){};
	
	Matrix3x3 operator*(const Matrix3x3& right)const
	{

	}

};


int main()
{
	system("pause");
	return 0;
}
