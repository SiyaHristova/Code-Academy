#!/bin/bash
PREFIX=194.145.63
now="$(date "+%b_%d_%H:%M:%S_%Y")"
FILE="log_$now"
for OCTET in 'seq 1 255'
do
echo -en "Pingin ${PREFIX}.${OCTET}...."
ping -c1 -w1 ${PREFIX}.${OCTET} > /dev/null 2>&1
if [ "$?" -eq "0" ]; then
echo "OK"
echo "${PREFIX}.${OCTET}" " Ok" >> $FILE
else
echo "Failed"
echo "${PREFIX}.${OCTET}" " Failed" >> $FILE
fi
done
