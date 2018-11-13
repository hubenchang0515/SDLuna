#include "sdluna.hpp"
#include <HB/brush.h>

static int HideOnBrushInit();
static int Circle(SDL_Renderer* renderer, int x, int y, int r);
static int FillCircle(SDL_Renderer* renderer, int x, int y, int r);
static int Triangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3);
static int FillTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3);
static int Ellipse(SDL_Renderer* renderer, int x, int y, int rx, int ry);
static int FillEllipse(SDL_Renderer* renderer, int x, int y, int rx, int ry);

void SDLuna_DrawBind(lua_State* L)
{
	static int init = HideOnBrushInit();
	
	luaMagic::bind(L, "Circle", Circle, true);
	luaMagic::bind(L, "FillCircle", FillCircle, true);
	luaMagic::bind(L, "Triangle", Triangle, true);
	luaMagic::bind(L, "FillTriangle", FillTriangle, true);
	luaMagic::bind(L, "Ellipse", Ellipse, true);
	luaMagic::bind(L, "FillEllipse", FillEllipse, true);
	
}

static int PutPixel(void* userdata, int x, int y)
{
	SDL_RenderDrawPoint(static_cast<SDL_Renderer*>(userdata), x, y);
}

static int SetColor(void* userdata, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	SDL_SetRenderDrawColor(static_cast<SDL_Renderer*>(userdata), r, r, b, a);
}

static int Circle(SDL_Renderer* renderer, int x, int y, int r)
{
	HB_Circle(static_cast<void*>(renderer), x, y, r);
}

static int FillCircle(SDL_Renderer* renderer, int x, int y, int r)
{
	HB_FillCircle(static_cast<void*>(renderer), x, y, r);
}

static int Triangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3)
{
	HB_Triangle(static_cast<void*>(renderer), x1, y1, x2, y2, x3, y3);
}

static int FillTriangle(SDL_Renderer* renderer, int x1, int y1, int x2, int y2, int x3, int y3)
{
	HB_FillTriangle(static_cast<void*>(renderer), x1, y1, x2, y2, x3, y3);
}

static int Ellipse(SDL_Renderer* renderer, int x, int y, int rx, int ry)
{
	HB_Ellipse(static_cast<void*>(renderer), x, y, rx, ry);
}

static int FillEllipse(SDL_Renderer* renderer, int x, int y, int rx, int ry)
{
	HB_FillEllipse(static_cast<void*>(renderer), x, y, rx, ry);
}

static int HideOnBrushInit()
{
	HB_SetPixelFunction(PutPixel);
	HB_SetColorFunction(SetColor);
	
	return 0;
}