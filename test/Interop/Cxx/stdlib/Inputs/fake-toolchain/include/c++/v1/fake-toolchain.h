#ifndef TEST_INTEROP_CXX_STDLIB_INPUTS_FAKE_TOOLCHAIN_H
#define TEST_INTEROP_CXX_STDLIB_INPUTS_FAKE_TOOLCHAIN_H

namespace FakeNamespace {

void foo(int x) {}

}; // namespace FakeNamespace

namespace std {
typedef unsigned long size_t;
} // namespace std

#endif
