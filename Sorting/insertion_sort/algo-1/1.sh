#!/bin/bash
# Read Size of Array
read N
i=0
# Read elements of Array
while [ "$i" -lt "$N" ]
do
	read A[$i]
	# maintain space between operator
	# expr is used for expression 
	i=`expr $i + 1`
done
# Insertion Sort Algorithm
i=1
while [ "$i" -lt "$N" ]
do
	key=${A[$i]}
	j=`expr $i - 1`
	while [ "$j" -ge 0 ] && [ "${A[$j]}" -gt "$key" ]
	do
		A[`expr $j + 1`]=${A[$j]}
		j=`expr $j - 1`
	done
	A[`expr $j + 1`]=$key 
	i=`expr $i + 1`
done

# Output
i=0
while [ "$i" -lt "$N" ]
do
	echo -n "${A[$i]} "
	i=`expr $i + 1`
done
