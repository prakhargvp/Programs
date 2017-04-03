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
# Selection Sort Algorithm
i=0
while [ "$i" -lt "$N" ]
do
	key=$i
	j=`expr $i + 1`
	while [ "$j" -lt "$N" ]
	do
		if [ "${A[$j]}" -lt "${A[$key]}" ] 
		then
			key=$j
		fi
		# increment j
		j=`expr $j + 1`
	done
	# swap(A[i],A[key])
	temp=${A[$i]}
	A[$i]=${A[$key]}
	A[$key]=$temp

	# increment i
	i=`expr $i + 1`
done

# Output
i=0
while [ "$i" -lt "$N" ]
do
	echo -n "${A[$i]} "
	i=`expr $i + 1`
done
