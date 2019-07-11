/* Workaround to compile with riscv64-unknown-linux-gnu-gcc */
#ifdef __gnu_linux__
static inline void riscv_clear_cache(void)
{
	asm volatile ("fence.i" ::: "memory");
}
#endif
