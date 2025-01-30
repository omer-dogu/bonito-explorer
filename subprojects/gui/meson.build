project('gui', 'cpp',
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

gui_include_dir = 'include'

gui_sources = [
    'src/gui.cpp',
    'src/displayFileTree.cpp'
]

imgui_impl_inc_dir = include_directories(imgui_bindings_path)

libgui = shared_library('gui', [gui_sources, imgui_impl_sources],
  include_directories :[ imgui_impl_inc_dir, gui_include_dir],
  dependencies: [imgui_dep, glfw3_dep],
  install : true
)

libgui_dep = declare_dependency(include_directories : gui_include_dir,
  link_with : libgui)
