#!/bin/bash

norminette *.c *.h
norm_exit=$?
if [ $norm_exit -eq 0 ] ; then
	make
	echo ==========[ Execute ]==========
	./start
fi
