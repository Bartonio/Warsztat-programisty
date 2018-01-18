#!/bin/bash
is_root_user(){
	[ $(id -u) -eq 0 ]
}
is_root_user
echo "s"
