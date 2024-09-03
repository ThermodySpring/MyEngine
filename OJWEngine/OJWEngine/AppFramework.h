#pragma once

#include "pch.h";

namespace AppCore
{
    // int RunApplication(IGameApp& app, const wchar_t* className, HINSTANCE hInst, int nCmdShow);
}

#define CREATE_APPLICATION( app_class ) \
int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE /*hPrevInstance*/, _In_ LPWSTR /*lpCmdLine*/, _In_ int nCmdShow) \
{ \
    return GameCore::RunApplication( app_class(), L#app_class, hInstance, nCmdShow ); \
}
