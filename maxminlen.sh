#!/bin/bash


var=$(cat /etc/passwd | cut -d: -f1)

maxl=0
max=''
minl=111
min=''

for x in $var
do
	if [ ${#x} -gt $maxl	]; then
		maxl=${#x}
		max=$x
	fi
		
	if [ ${#x} -lt $minl ] ; then
		minl=${#x}
		min=$x
	fi


done	

echo $max
echo $min
