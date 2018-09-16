project('multiple-targets', 'c',
  version : '1.0',
  default_options : ['warning_level=3'])

subdir('common')

#ide:editable-filelist
sources_hello = [
  'say_hello.c',
]
executable('say_hello', sources_hello, link_with : lib, install : true)

#ide:editable-filelist
sources_hi = [
  'say_hi.c',
]
executable('say_hi', sources_hi, link_with : lib, install : true)

#ide:editable-filelist
sources_howdy = [
  'say_howdy.c',
]
executable('say_howdy', sources_howdy, link_with : lib, install : true)
