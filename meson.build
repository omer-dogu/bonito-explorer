project('bonito-explorer', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
                     'cpp_std=c++17'])

gui_proj = subproject('gui')
gui_dep  = gui_proj.get_variable('libgui_dep')

bonito_explorer_sources =[
  'src/main.cpp'
]

exe = executable('bonito-explorer', bonito_explorer_sources,
  include_directories : 'include',
  dependencies: [gui_dep],
  install : true)

test('basic', exe)
