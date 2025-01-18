project('bonito-explorer', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

imgui_dep = dependency('imgui') 
glfw3_dep = dependency('glfw3')

exe = executable('bonito-explorer', 'bonito_explorer.cpp','imgui_impl_opengl3.cpp','imgui_impl_glfw.cpp',
  dependencies: [imgui_dep, glfw3_dep],
  install : true)

test('basic', exe)
