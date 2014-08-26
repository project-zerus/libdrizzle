/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */


#pragma once

/* _SYS_FEATURE_TESTS_H is Solaris, _FEATURES_H is GCC */
#if defined( _SYS_FEATURE_TESTS_H) || defined(_FEATURES_H)
# error "You should include config.h as your first include file"
#endif



/* the location of <cinttypes> */
#define CINTTYPES_H <tr1/cinttypes>

/* the location of <cstdint> */
#define CSTDINT_H <tr1/cstdint>

/* Define to 1 to enable debugging code. */
#define DEBUG 0

/* Another magical number */
/* #undef EAI_SYSTEM */

/* machine is big-endian */
/* #undef ENDIAN_BIG */

/* machine is little-endian */
/* #undef ENDIAN_LITTLE */

/* Define to 1 if you have the <argp.h> header file. */
#define HAVE_ARGP_H 1

/* Define to 1 if you have the <cxxabi.h> header file. */
#define HAVE_CXXABI_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* define if the compiler supports GCC C++ ABI name demangling */
#define HAVE_GCC_ABI_DEMANGLE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if the system has the type `in_port_t'. */
/* #undef HAVE_IN_PORT_T */

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if MCHECK is found */
/* #undef HAVE_MCHECK */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a MSG_DONTWAIT */
#define HAVE_MSG_DONTWAIT 1

/* Define to 1 if you have a MSG_MORE */
#define HAVE_MSG_MORE 1

/* Define to 1 if you have a MSG_NOSIGNAL */
#define HAVE_MSG_NOSIGNAL 1

/* Define to 1 if you have the `on_exit' function. */
#define HAVE_ON_EXIT 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
#define HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `ppoll' function. */
#define HAVE_PPOLL 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Have PTHREAD_PRIO_INHERIT. */
#define HAVE_PTHREAD_PRIO_INHERIT 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if ZLIB is available. */
#define HAVE_ZLIB 1

/* Define to 1 if you have the </tmp/dummy1_zlib.h> header file. */
#define HAVE__TMP_DUMMY1_ZLIB_H 1

/* Define to 1 if you have the </tmp/dummy3_zlib.h> header file. */
/* #undef HAVE__TMP_DUMMY3_ZLIB_H */

/* CPU of Build System */
#define HOST_CPU "x86_64"

/* OS of Build System */
#define HOST_OS "linux-gnu"

/* Vendor of Build System */
#define HOST_VENDOR "unknown"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 to disable assert'ing code. */
/* #undef NDEBUG */

/* Name of package */
#define PACKAGE "libdrizzle"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugs.launchpad.net/drizzle"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libdrizzle"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libdrizzle 5.1.4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libdrizzle"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://drizzle.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.1.4"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* CPU of Target System */
#define TARGET_CPU "x86_64"

/* OS of Target System */
#define TARGET_OS "linux-gnu"

/* Whether we are building for FreeBSD */
/* #undef TARGET_OS_FREEBSD */

/* Whether we build for Linux */
#define TARGET_OS_LINUX 1

/* Whether we build for OSX */
/* #undef TARGET_OS_OSX */

/* Whether we are building for Solaris */
/* #undef TARGET_OS_SOLARIS */

/* Whether we are building for Windows */
/* #undef TARGET_OS_WINDOWS */

/* Vendor of Target System */
#define TARGET_VENDOR "unknown"

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if the code was built from VCS. */
#define VCS_CHECKOUT 1

/* VCS system */
#define VCS_SYSTEM "git"

/* Version number of package */
#define VERSION "5.1.4"

/* machine is big-endian */
/* #undef WORDS_BIGENDIAN */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Workaround for bug in FreeBSD headers */
/* #undef __APPLE_CC__ */

/* Use STDC Limit Macros in C++ */
#define __STDC_LIMIT_MACROS 1

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */


#ifndef HAVE_SYS_SOCKET_H
# define SHUT_RD SD_RECEIVE
# define SHUT_WR SD_SEND
# define SHUT_RDWR SD_BOTH
#endif
          



/* This seems to be required for older compilers @note http://stackoverflow.com/questions/8132399/how-to-printf-uint64-t  */
#ifndef __STDC_FORMAT_MACROS
#  define __STDC_FORMAT_MACROS
#endif
 
#if defined(__cplusplus)
#  include CINTTYPES_H
#else
#  include <inttypes.h>
#endif

#if !defined(HAVE_ULONG) && !defined(__USE_MISC)
# define HAVE_ULONG 1
typedef unsigned long int ulong;
#endif

#ifndef HAVE_MSG_DONTWAIT
# define MSG_DONTWAIT 0
#endif // HAVE_MSG_DONTWAIT


