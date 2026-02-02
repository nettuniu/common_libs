#ifndef DS_TEST_RUNNER_H
#define DS_TEST_RUNNER_H

#include <cstdio>
#include <cstdlib>

inline int ds_test_failures_g = 0;

#define DS_TEST_ASSERT(condition) \
    do \
        { \
        if (!(condition)) \
            { \
            std::fprintf(stderr, "TEST FAIL: %s:%d: %s\n", __FILE__, __LINE__, #condition); \
            ++ds_test_failures_g; \
            } \
        } while (0)

inline int ds_test_finalize()
    {
    return ds_test_failures_g == 0 ? 0 : 1;
    }

#endif // DS_TEST_RUNNER_H
