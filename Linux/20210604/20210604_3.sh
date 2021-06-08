#!/bin/bash
case "$2" in
	'+')
		result=`expr $1 + $3`
		echo $result
	;;
	'-')
	        result=`expr $1 - $3`
       		echo $result
	;;
	'\*')
		result=$(expr "scale=2;  $1 * $3" | bc)
		echo $result
	;;
	'/')
		result=$(expr "scale=2; $1/$3" | bc)
		echo $result
	;;
esac

