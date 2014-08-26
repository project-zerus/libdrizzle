cc_library(
  name = 'libdrizzle',
  export_incs = '.',
  defs = [
    'USE_OPENSSL',
  ],
  extra_cppflags = [
    '-Wno-literal-suffix',
  ],
  srcs = [
    'libdrizzle/binlog.cc',
    'libdrizzle/column.cc',
    'libdrizzle/command.cc',
    'libdrizzle/conn.cc',
    'libdrizzle/conn_uds.cc',
    'libdrizzle/drizzle.cc',
    'libdrizzle/error.cc',
    'libdrizzle/field.cc',
    'libdrizzle/handshake.cc',
    'libdrizzle/pack.cc',
    'libdrizzle/poll.cc',
    'libdrizzle/query.cc',
    'libdrizzle/result.cc',
    'libdrizzle/row.cc',
    'libdrizzle/sha1.cc',
    'libdrizzle/ssl.cc',
    'libdrizzle/state.cc',
    'libdrizzle/statement.cc',
    'libdrizzle/statement_param.cc'
  ],
  deps = [
    '//openssl:openssl',
  ]
)
