#pragma once

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_TRACE
#include <spdlog/spdlog.h>

#define BONE_CRITICAL SPDLOG_CRITICAL
#define BONE_ERROR SPDLOG_ERROR
#define BONE_WARNING SPDLOG_WARNING
#define BONE_INFO SPDLOG_INFO
#define BONE_DEBUG SPDLOG_DEBUG
#define BONE_TRACE SPDLOG_TRACE

namespace Bone {
class Logger {
    void setup();
};

static inline void Logger::setup()
{
    spdlog::set_level(spdlog::level::trace);
}
} // namespace Bone
