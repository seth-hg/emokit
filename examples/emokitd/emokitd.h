#include "sys/stat.h"

#define DAEMON_IDENT "emokitd"
#define PIDFILE "/var/run/emokitd.pid"
#define LOCKMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)
#define EMOKIT_PKT_SIZE 32

