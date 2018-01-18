#!/bin/bash
# Variables
domain="CyberCoBIz"
out=""
function to_lower()
{
	local str="$@"
	local output
	output=$(tr '[A-Z]' '[a-z]'<<<"${str}")
	echo $output
}
to_lower "THiS iS A TeSt"
out=$(to_lower ${domain})
echo "Domain name : $out"
