project('simple', 'cpp',
  version : '1.0',
  default_options : ['warning_level=3',
                     'cpp_std=c++14'])

#ide:editable-filelist
sources = [
  'simple.cpp',
]

exe = executable('simple', sources, install : true)

test('basic', exe)
