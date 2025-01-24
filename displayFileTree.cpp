#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <stdio.h>
#define GL_SILENCE_DEPRECATION
#if defined(IMGUI_IMPL_OPENGL_ES2)
#include <GLES2/gl2.h>
#endif
#include <GLFW/glfw3.h> // Will drag system OpenGL headers

// [Win32] Our example includes a copy of glfw3.lib pre-compiled with VS2010 to maximize ease of testing and compatibility with old VS compilers.
// To link with VS2010-era libraries, VS2015+ requires linking with legacy_stdio_definitions.lib, which we do using this pragma.
// Your own project should not be affected, as you are likely to link with a newer binary of GLFW that is adequate for your version of Visual Studio.
#if defined(_MSC_VER) && (_MSC_VER >= 1900) && !defined(IMGUI_DISABLE_WIN32_FUNCTIONS)
#pragma comment(lib, "legacy_stdio_definitions")
#endif

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>

void dispFileTree(const std::filesystem::path& dir_path, int depth = 0)
{
    for (auto const& dir_entry : std::filesystem::recursive_directory_iterator(dir_path)) {
        if (std::filesystem::is_directory(dir_entry)) {
            ImGui::Text("\t");
            ImGui::SameLine();
        }
        ImGui::Text("%s", dir_entry.path().filename().string().c_str());
    }
}