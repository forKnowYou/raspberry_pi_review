# across
run unixbench.sh to start unixbench test, 
obtain cpu calculation test, storage test

# burncpu
power consumption and tempratrue test in high speed state
reference killCpu.c to burn 3 CPUs
run killCpu.py to burn 1 CPU

# memtester
memory test

# boot from U disk
add script
echo `cat /proc/uptime` >> /tmp/uptime.log
to /etc/rc.local obtain boot time

# speedtest
run speedtest.py to get net speed
