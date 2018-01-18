#!/bin/bash
d=/apache.jail
create_jail(){
	local d=$1
	echo "create_jail(): d is set to $d"
}

echo "Before to $d"
create_jail "/home/apache/jail"
echo "After to $d"
