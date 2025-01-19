project('bonito-explorer', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

imgui_dep = dependency('imgui') 
glfw3_dep = dependency('glfw3')


imgui_bindings_path = imgui_dep.get_variable('prefix') + '/res/bindings/'
imgui_impl_sources=[
  imgui_bindings_path + 'imgui_impl_opengl3.cpp',
  imgui_bindings_path + 'imgui_impl_glfw.cpp'
]

imgui_impl_inc_dir = include_directories(imgui_bindings_path)

exe = executable('bonito-explorer', 'bonito_explorer.cpp', imgui_impl_sources,
  include_directories : imgui_impl_inc_dir,
  dependencies: [imgui_dep, glfw3_dep],
  install : true)

test('basic', exe)
