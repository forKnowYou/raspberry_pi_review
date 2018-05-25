// for i in seq 1 $(cat /proc/cpuinfo | grep "physical id" | wc -l); do ./out & done
// ps aux  // list all thread
// kill id  // kill thread by id
// taskset -cp CPUID thread id

int main()
{
  while(1);
  return 0;
}
