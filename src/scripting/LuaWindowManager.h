#pragma once
#include "LuaWindowState.h"

#include <string>
#include <unordered_map>

class LuaWindowManager
{
public:
    static void Load();
    static void Save();
    static std::unordered_map<std::string, LuaWindowState> windows;
};

