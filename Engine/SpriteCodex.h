#pragma once

#include "Graphics.h"
#include "Vec2.h"

class SpriteCodex
{
public:
	// width and height of all tiles
	static constexpr int tileSize = 16;
	// base color for all tiles
	static constexpr Color baseColor = { 192,192,192 };
	// 16x16 tile sprites assume (192,192,192) background and top left origin
	static void DrawTile0( const Vec2& pos,Graphics& gfx );
	static void DrawTile1( const Vec2& pos,Graphics& gfx );
	static void DrawTile2( const Vec2& pos,Graphics& gfx );
	static void DrawTile3( const Vec2& pos,Graphics& gfx );
	static void DrawTile4( const Vec2& pos,Graphics& gfx );
	static void DrawTile5( const Vec2& pos,Graphics& gfx );
	static void DrawTile6( const Vec2& pos,Graphics& gfx );
	static void DrawTile7( const Vec2& pos,Graphics& gfx );
	static void DrawTile8( const Vec2& pos,Graphics& gfx );
	static void DrawTileButton( const Vec2& pos,Graphics& gfx );
	static void DrawTileCross( const Vec2& pos,Graphics& gfx );
	static void DrawTileFlag( const Vec2& pos,Graphics& gfx );
	static void DrawTileBomb( const Vec2& pos,Graphics& gfx );
	static void DrawTileBombRed( const Vec2& pos,Graphics& gfx );
};