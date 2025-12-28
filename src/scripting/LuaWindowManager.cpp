#include "LuaWindowManager.h"

std::unordered_map<std::string, LuaWindowState>  LuaWindowManager::windows = std::unordered_map<std::string, LuaWindowState>();

void LuaWindowManager::Load()
{
    // should read from a predefined json file containing the LuaWindowState dict (unordered map)
}

void LuaWindowManager::Save()
{
    // should write the current state to the json file
}
