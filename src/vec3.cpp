#include <cmath>

#include "../head/vec3.hpp"

Vec3::Vec3( float X, float Y, float Z )
		: x(X)
		, y(Y)
		, z(Z)
		{}

float Vec3::len2() const
{
	return x * x + y * y + z * z;
}

float Vec3::len() const
{
	return sqrt(len2());
}

void Vec3::normalize()
{
	float l = len();
	x /= l;
	y /= l;
	z /= l;
}

float dot(const Vec3& a, const Vec3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z ;
}

const Vec3 cross_v(const Vec3& a, const Vec3& b)
{
	return Vec3( a.y * b.z - a.z * b.y,
		     a.z * b.x - a.x * b.z,
		     a.x * b.y - a.y * b.x );
}

const Vec3 cross_f(const Vec3& a, const Vec3& b)
{
	return cross_v(a,b).len();
}

const Vec3 operator + (const Vec3& a, const Vec3& b)
{
	return Vec3(a.x+b.x,a.y+b.y,a.z+b.z);
}

const Vec3 operator - (const Vec3& a, const Vec3& b)
{
	return Vec3(a.x-b.x,a.y-b.y,a.z-b.z);
}

const Vec3 operator * (const Vec3& v, const float f)
{
	return Vec3(f*v.x,f*v.y,f*v.z);
}

const Vec3 operator * (const float f, const Vec3& v)
{
	return Vec3(f*v.x,f*v.y,f*v.z);
}

const Vec3 operator / (const Vec3& v, const float f)
{
	return Vec3((v.x)/f,(v.y)/f,(v.z)/f);
}

const Vec3 operator - (const Vec3& v)
{
	return Vec3( -v.x, -v.y, -v.z );
}

Vec3& Vec3::operator = (const Vec3& v)
{
	if(this == &v)
		return *this;
	x = v.x;
	y = v.y;
	z = v.z;
	return *this;
}
