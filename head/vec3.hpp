#ifndef VEC3_HPP_INCLUDED
#define VEC3_HPP_INCLUDED

struct Vec3
{
	float x,
	      y,
	      z;

	Vec3( float X = {}, float Y = {}, float Z = {} );

	float len2() const;
	float len() const;
	void normalize();

	friend const Vec3 operator + (const Vec3& a, const Vec3& b);
	friend const Vec3 operator - (const Vec3& a, const Vec3& b);
	friend const Vec3 operator * (const float f, const Vec3& v);
	friend const Vec3 operator * (const Vec3& v, const float f);
	friend const Vec3 operator / (const Vec3& v, const float f);
	
	friend const Vec3 operator - (const Vec3& v);
	Vec3& operator = (const Vec3& v);
};


#endif
//
