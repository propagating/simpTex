// NoiseGeneratorTestApp.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "NoiseGeneratorTestApp.h"
#include <stdio.h>
#include <string.h>
#include <string>



#include "../NoiseGenerator/NoiseGenerator.h"

#define MAX_LOADSTRING 100

// Global Variables:
HINSTANCE hInst;                                // current instance
WCHAR szTitle[MAX_LOADSTRING];                  // The title bar text
WCHAR szWindowClass[MAX_LOADSTRING];            // the main window class name

// Forward declarations of functions included in this code module:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

void TestNoiseLibrary()
{
    for(int i = 0; i <20; i++)
    {
		std::string perlinFilePath = "c:/users/ryan/desktop/Resolution/Perlin/p";
        perlinFilePath.append(std::to_string(i));
        perlinFilePath.append(".png");
    	
        std::string simplexFilePath = "c:/users/ryan/desktop/Resolution/Simplex/s";
        simplexFilePath.append(std::to_string(i));
        simplexFilePath.append(".png");

        float resolution = float(25.0f * float(i));

    	auto iCreatedPNG = CreateTexture2D("RGBA32", 1000, 512);
        Generate_PerlinNoise(iCreatedPNG, resolution, 1.0f);
        SaveTextureToFile(iCreatedPNG, perlinFilePath.c_str());

        auto iCreatedPNG2 = CreateTexture2D("RGBA32", 1000, 512);
        Generate_SimplexNoise(iCreatedPNG2, resolution, 1.0f);
        SaveTextureToFile(iCreatedPNG2, simplexFilePath.c_str());
;
    }

}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{

    TestNoiseLibrary();
    return 0;
}