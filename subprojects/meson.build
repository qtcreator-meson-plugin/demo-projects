project('subprojects', 'cpp',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

json_dep = subproject('json').get_variable('json_dep')
fmt_dep = subproject('fmt').get_variable('fmt_dep')

#ide:editable-filelist
src = [
  'main.cpp',
]

executable('main', src, dependencies: [json_dep, fmt_dep])
