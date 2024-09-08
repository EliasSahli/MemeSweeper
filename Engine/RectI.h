#pragma once

#include "Vec2.h"

class RectI
{
public:
	RectI() = default;
	RectI( int left_in,int right_in,int top_in,int bottom_in );
	RectI( const Vec2& topLeft,const Vec2& bottomRight );
	RectI( const Vec2& topLeft,int width,int height );
	bool IsOverlappingWith( const RectI& other ) const;
	bool IsContainedBy( const RectI& other ) const;
	static RectI FromCenter( const Vec2& center,int halfWidth,int halfHeight );
	RectI GetExpanded( int offset ) const;
	Vec2 GetCenter() const;
public:
	int left;
	int right;
	int top;
	int bottom;
};