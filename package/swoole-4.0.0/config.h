/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Whether to build swoole as dynamic module */
#define COMPILE_DL_SWOOLE 1

/* have accept4 */
/* #undef HAVE_ACCEPT4 */

/* have boost.context? */
/* #undef HAVE_BOOST_CONTEXT */

/* have clock_gettime */
#define HAVE_CLOCK_GETTIME 1

/* cpu affinity? */
/* #undef HAVE_CPU_AFFINITY */

/* have daemon */
#define HAVE_DAEMON 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* have epoll */
/* #undef HAVE_EPOLL */

/* have eventfd */
/* #undef HAVE_EVENTFD */

/* have execinfo */
#define HAVE_EXECINFO 1

/* have FUTEX? */
/* #undef HAVE_FUTEX */

/* have gethostbyname2_r */
/* #undef HAVE_GETHOSTBYNAME2_R */

/* have hiredis */
#define HAVE_HIREDIS 1

/* have inotify */
/* #undef HAVE_INOTIFY */

/* have inotify_init1 */
/* #undef HAVE_INOTIFY_INIT1 */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* have kqueue */
#define HAVE_KQUEUE 1

/* have libpq */
/* #undef HAVE_LIBPQ */

/* have LINUX_AIO? */
/* #undef HAVE_LINUX_AIO */

/* have malloc_trim */
/* #undef HAVE_MALLOC_TRIM */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* have mkostemp */
#define HAVE_MKOSTEMP 1

/* have pthread_mutex_timedlock */
/* #undef HAVE_MUTEX_TIMEDLOCK */

/* have nghttp2 */
#define HAVE_NGHTTP2 1

/* have openssl */
/* #undef HAVE_OPENSSL */

/* have pcre */
#define HAVE_PCRE 1

/* have poll */
#define HAVE_POLL 1

/* have postgresql */
#define HAVE_POSTGRESQL 1

/* have pthread_barrier_init */
/* #undef HAVE_PTHREAD_BARRIER */

/* have ptrace */
#define HAVE_PTRACE 1

/* have SO_REUSEPORT? */
#define HAVE_REUSEPORT 1

/* have pthread_rwlock_init */
#define HAVE_RWLOCK 1

/* have sendfile */
#define HAVE_SENDFILE 1

/* have signalfd */
/* #undef HAVE_SIGNALFD */

/* have pthread_spin_lock */
/* #undef HAVE_SPINLOCK */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* have timerfd */
/* #undef HAVE_TIMERFD */

/* have ucontext? */
/* #undef HAVE_UCONTEXT */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* have valgrind? */
/* #undef HAVE_VALGRIND */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* enable ability of coroutine */
#define SW_COROUTINE 1

/* do we enable swoole debug */
/* #undef SW_DEBUG */

/* have zlib */
#define SW_HAVE_ZLIB 1

/* enable trace log */
/* #undef SW_LOG_TRACE_OPEN */

/* use boost asm context? */
/* #undef SW_NO_USE_ASM_CONTEXT */

/* enable sockets support */
/* #undef SW_SOCKETS */

/* enable http2.0 support */
/* #undef SW_USE_HTTP2 */

/* enable hugepage support */
/* #undef SW_USE_HUGEPAGE */

/* use jemalloc */
/* #undef SW_USE_JEMALLOC */

/* use mysqlnd */
/* #undef SW_USE_MYSQLND */

/* enable openssl support */
/* #undef SW_USE_OPENSSL */

/* enable PHP-X support */
/* #undef SW_USE_PHPX */

/* enable picohttpparser support */
/* #undef SW_USE_PICOHTTPPARSER */

/* enable coroutine-postgresql support */
/* #undef SW_USE_POSTGRESQL */

/* enable async-redis support */
#define SW_USE_REDIS 1

/* enable thread support */
/* #undef SW_USE_THREAD */

/* enable timewheel support */
/* #undef SW_USE_TIMEWHEEL */
