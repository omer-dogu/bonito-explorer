#include <gui.h>
#include <logger.h>

int main(int argc, char** argv)
{
    Bone::Logger::setup();

    BONE_ERROR("Hello, my age is {}", 29);
    BONE_CRITICAL("Hello, my trans age is {}", 31);
    BONE_WARNING("Hello, my old age is {}", 12);
    BONE_INFO("Hello, my new age is {}", 13);
    BONE_DEBUG("Hello, my oldest age is {}", 0);
    BONE_TRACE("Hello, my youngest age is {}", 63);
    Gui gui;
    return 0;
}