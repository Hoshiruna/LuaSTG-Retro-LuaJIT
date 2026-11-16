#if !defined(_M_X64) && !defined(_M_AMD64) && !defined(__x86_64__) && !defined(__amd64__)
#error "ARE YOU AMD64?"
#endif

int main() {
    return 0;
}
