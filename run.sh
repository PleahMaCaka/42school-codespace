#!/bin/bash

norminette start.c
norm_exit=$?
if [ $norm_exit -eq 0 ] ; then
	make
	echo ==========[ Execute ]==========
	./start
fi
