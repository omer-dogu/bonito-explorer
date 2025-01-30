project('logger', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

spdlog_dep = dependency('spdlog')

logger_include_dir = 'include'

logger_sources = [
    'src/logger.cpp',
]

liblogger = shared_library('logger', [logger_sources],
  include_directories :[logger_include_dir],
  dependencies: [spdlog_dep],
  install : true
)

liblogger_dep = declare_dependency(include_directories : logger_include_dir,
  link_with : liblogger)
