#!/bin/bash


var=$(cat /etc/passwd | cut -d: -f1)
for x in $var
do
	echo ${#x}
done	
