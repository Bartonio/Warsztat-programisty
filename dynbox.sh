#!/bin/bash
# dynbox.sh - Yes/No box demo
dialog --title "Delete file" \
--backtitle "Linux Shell Script Tutorial" \
\"/tmp/foo.txt\"?" 7 60
respone=$?
case $response in
	0) echo "File Deleted.";;
	1) echo "not Deleted.";;
	255) echo "[ESC]";;
esac
	
