#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

#include "log/log.h"

void test_log() {
    LOG_TRACE("{0: <+#16X} {0:*^-#20o} {1:>-12.12f} {1:.4E} {2:-^12s} {2:_>16s}",
              2147483647, 3.1415926, "text");
    LOG_DEBUG("{0: <+#16X} {0:*^-#20o} {1:>-12.12f} {1:.4E} {2:-^12s} {2:_>16s}",
              2147483647, 3.1415926, "text");
    LOG_INFO("{0: <+#16X} {0:*^-#20o} {1:>-12.12f} {1:.4E} {2:-^12s} {2:_>16s}",
             2147483647, 3.1415926, "text");
    LOG_WARN("{0: <+#16X} {0:*^-#20o} {1:>-12.12f} {1:.4E} {2:-^12s} {2:_>16s}",
             2147483647, 3.1415926, "text");
    LOG_ERROR("{0: <+#16X} {0:*^-#20o} {1:>-12.12f} {1:.4E} {2:-^12s} {2:_>16s}",
              2147483647, 3.1415926, "text");
}

int main() {
    test_log();

    return 0;
}
