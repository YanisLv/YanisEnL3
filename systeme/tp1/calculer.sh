#!/bin/bash
count=0
total=1000
pstr="[=======================================================================]"
while [ $count -lt $total ]; do
sleep 0.5 # this is work
count=$(( $count + 1 ))
pd=$(( $count * 73 / $total ))
printf "%3d.%1d%% %.${pd}s\n" \
$(( $count * 100 / $total )) $(( ($count * 1000 / $total) % 10 )) $pstr
done
