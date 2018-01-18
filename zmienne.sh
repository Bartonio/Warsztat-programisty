#!/bin/bash
create_jail(){
	d=$1
	echo "create_jail(): d is set to $d"
}
d=/apache.jail
echo "Before to $d"
create_jail "/home/apache/jail"
echo "After to $d"
